#include "pch.h"
#include <stdio.h>    // sprintf_s 함수를 사용하기 위해!
#include <string.h>   // strlen 함수를 사용하기 위해!
#include <string>   // strlen 함수를 사용하기 위해!
#include "framework.h"
#include "tipsware.h"
#include "Hax_calculator.h"
#include "kor_convert.h"

#define com_port 2

using namespace std;

char buf[80]; // 에디트 컨트롤에 입력된 문자열을 저장할 변수
char jamo_buf[80];
string hangle="";
struct AppData  // 프로그램에서 사용할 내부 데이터
{
    void* p_serial;  // 시리얼 통신 객체의 주소를 기억할 변수!
};
void serial() {
    // 프로그램이 내부적으로 사용할 메모리를 선언한다.
    AppData data;
    data.p_serial = CreateSerialObject();  // 시리얼 객체를 생성한다.
    // COM3를 연다. 포트에서 사용하는 기본 속성 값 : 9600, 8bit, NOPARITY, ONESTOPBIT
    int state = Serial_OpenPort(data.p_serial, com_port, gh_main_wnd);
    SetAppData(&data, sizeof(data));  // 지정한 변수를 내부 데이터로 저장한다.

    // 문자열을 저장할 1000번 아이디를 가진 ListBox를 생성한다.
    void* p_ctrl = CreateListBox(10, 10, 400, 150, 1000);
    //ListBox_InsertString(p_ctrl, -1, "에디트 컨트롤에 전송할 문자열을 입력하고 '전송' 버튼을 누르세요!");
    // COM3 포트의 상태를 출력한다.
    if (state > 0) ListBox_InsertString(p_ctrl, -1, "성공적으로 포트를 열었습니다.");
    else {  // 포트 열기에 실패한 경우! 실패 이유를 출력한다.
        if (state == -1) ListBox_InsertString(p_ctrl, -1, "(오류) 현재 객체가 이미 포트를 열어서 사용중임");
        else if (state == -2) ListBox_InsertString(p_ctrl, -1, "(오류) 포트 설정값에 문제가 있어서 포트를 열수 없음");
        else if (state == -3) ListBox_InsertString(p_ctrl, -1, "(오류) 사용할수 없는 포트번호를 사용함");
        else if (state == -4) ListBox_InsertString(p_ctrl, -1, "(오류) 다른 프로세스가 오픈해서 사용중이 포트라서 열수 없음");
        else ListBox_InsertString(p_ctrl, -1, "(오류) 알수 없는 내부 오류");
    }
}
void hangle_s() {
    for (int i = 0; i < hangle.length(); i++) {
        jamo_buf[i]= hangle.at(i);
    }
    hangle = "";
}
// 컨트롤을 조작했을 때 호출할 함수 만들기
// 컨트롤의 아이디(a_ctrl_id), 컨트롤의 조작 상태(a_notify_code), 선택한 컨트롤 객체(ap_ctrl)
void OnCommand(INT32 a_ctrl_id, INT32 a_notify_code, void* ap_ctrl)
{
    if (a_ctrl_id == 1002) {  // [전송] 버튼이 눌러진 경우!
        AppData* p_data = (AppData*)GetAppData(); // 프로그램의 내부 데이터 주소를 가져온다.
        // 에디터(1001번) 컨트롤에 입력된 문자열을 str 배열에 복사한다.
        GetCtrlName(FindControl(1001), buf, 64);
        call();
        hangle_s();
        short data_size = (short)(strlen(jamo_buf) + 1);  // 문자열의 길이를 구한다. (NULL 문자 포함)
        // 프로토콜을 구성하기 위해 메모리를 할당한다.
        // 이 프로그램의 프로토콜은 시작 2 바이트에 전송할 데이트의 크기를 저장하고
        // 그 크기만큼 추가로 문자열을 저장하도록 했습니다. (개발자가 정하면 됨)
        char* p_send_data = (char*)malloc(2+data_size);
        if (NULL != p_send_data) {
            *(short*)p_send_data = data_size;  // 전송한 문자열의 길이를 저장한다.
            // 전송할 문자열을 2바이트 뒤에 복사한다.
            memcpy(p_send_data + 2, (const wchar_t*)jamo_buf, data_size);
            // 시리얼로 포트로 데이터를 전송한다.
            Serial_WriteCommData(p_data->p_serial, p_send_data, data_size + 2);
            free(p_send_data);  // 프로토콜을 구성하기 위해 사용했던 메모리를 해제한다.
        }
    }
}

// 사용자가 메시지를 직접 처리할 때 사용하는 함수
int OnUserMsg(HWND ah_wnd, UINT a_message_id, WPARAM wParam, LPARAM lParam)
{
    if (a_message_id == 21000) {  // 시리얼 포트에 데이터가 수신되면 전달되는 메시지
        AppData* p_data = (AppData*)GetAppData(); // 프로그램의 내부 데이터 주소를 가져온다.
        int read_size = Serial_GetRecvDataSize(p_data->p_serial);  // 현재 수신된 데이터의 크기를 얻는다.

        if (read_size >= sizeof(unsigned short int)) {  // 최소 2바이트 이상이 전송되어야지 프로토콜을 만족한다.
            char temp_str[1024];  // 출력할 문자열을 저장할 변수
            //수신된 데이터가 들어있는 메모리의 주소를 얻는다.
            char* p_recv_buffer = Serial_GetRecvDataBuffer(p_data->p_serial);
            //전송된 문자열의 길이(크기)를 얻는다.
            unsigned short int num = *(unsigned short int*)p_recv_buffer;
            // num 길이 만큼 데이터가 전송되었는지 확인한다.
            if (int(num + sizeof(unsigned short int)) <= read_size) {
                // 수신된 문자열은 2바이트 뒤에 있기 때문에 p_recv_buffer + sizeof(unsigned short int) 위치부터
                // 문자열을 출력하면 수신된 문자열을 확인할 수 있다.
                sprintf_s(temp_str, 1024, "COM%d : %s", Serial_IsOpenPort(p_data->p_serial),
                    p_recv_buffer + sizeof(unsigned short int));
                // temp_str에 구성된 문자열을 리스트 박스의 마지막 위치에 추가한다.
                ListBox_InsertString(FindControl(1000), -1, temp_str, 1);
                // 처리한 데이터의 길이만큼 수신 버퍼에서 제거한다.
                Serial_RemoveDataFromBuffer(p_data->p_serial, sizeof(unsigned short int) + num);
            }
        }
        // 시리얼 포트 감시용 스레드가 다시 데이터 수신을 감시하도록 설정한다.
        Serial_ResumeWatchThread(p_data->p_serial);
    }
    return 0;
}

void OnDestroy()  // 응용 프로그램이 종료될 때 호출되는 함수
{
    AppData* p_data = (AppData*)GetAppData(); // 프로그램의 내부 데이터 주소를 가져온다.
    // 생성된 시리얼 객체를 제거한다.
    DestroySerialObject(p_data->p_serial);
}

// 버튼 컨트롤을 눌렀을 때와 응용 프로그램이 종료될 때 호출할 함수를 등록한다.
CMD_USER_MESSAGE(OnCommand, OnDestroy, OnUserMsg)

int main()
{
    ChangeWorkSize(420, 200); // 작업 영역을 설정한다.
    // 윈도우의 그리기 영역을 RGB(72, 87, 114) 색으로 채운다!
    Clear(0, RGB(72, 87, 114));
    // 프로그램이 내부적으로 사용할 메모리를 선언한다.
    serial();
    CreateEdit(10, 167, 346, 24, 1001, 0);  // 문자열을 입력할 에디트 컨트롤을 추가한다.
    CreateButton("전송", 360, 164, 50, 28, 1002); // 에디트에 입력된 내용을 시리얼 포트로 전송할 때 사용할 버튼
    ShowDisplay(); // 정보를 윈도우에 출력한다.
    return 0;
}