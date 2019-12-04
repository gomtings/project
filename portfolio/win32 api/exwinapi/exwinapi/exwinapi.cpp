// exwinapi.cpp : 애플리케이션에 대한 진입점을 정의합니다.
#pragma warning(disable : 4996)
#include "pch.h"
#include "framework.h"
#include "exwinapi.h"
#include<cstdlib>
#include<ctime>
#include<string>
#include "chatString.cpp"

#define MAX_COUNT 30// 최대 저장 가능한 카톡방의 개수 
#define IDD_EXAMCLIPBOARD_DIALOG        102
#define IDR_MAINFRAME                   128
#define IDC_INPUT_EDIT                  1000
#define IDC_TO_CLIPBOARD                1001
#define IDC_TO_CLIPBOARD2               1002
#define IDC_FROM_CLIPBOARD              1002

HWND my_win, my_win_edit; //  현재 자신의 윈도우 핸들 저장 , 현 윈도우의 에디트의 핸들 저장 

struct TalkWnd {
	//카톡방 윈도우 핸들 저장 , 카톡방에 있는 에디트 컨트롤의 핸들 저장
	HWND h_talk_wnd, h_edit_wnd, h_talk_collect;
	wchar_t title[256];
};
TalkWnd g_talk_list[MAX_COUNT];

struct Talklst {
	//카톡방 윈도우 핸들 저장 , 카톡방에 있는 에디트 컨트롤의 핸들 저장
	HWND h_talk_wnd , h_talk_collect;
};
Talklst g_talk_lst[MAX_COUNT];

int g_talk_count = 0, g_talk_cnt = 0;

// 채팅을 입력할 에디트 컨트롤 핸들 저장
HWND gh_chat_edit , gh_send_btn, gh_send_btn2;
HWND gh_list_box, gh_list_box2;
HFONT gh_font;
// 사용자 가 메시지를 처리하는 함수
int number[7];
int num = 0;
int INDEX; // 커서의 위치 를 알려주기 위한 변수 
char buffer[_MAX_U64TOSTR_BASE2_COUNT];
wchar_t *temp_string;  // 문자열을 복사하는데 사용할 변수  // 문자열을 복사하는데 사용할 변수
class function { // 클립 보드 메소드가 정의된 클레스 입니다. 

	// 클립보드의 내용을 문자열로 저장하는 함수 의 원형
	friend int CopyTextToClipboard(const char* ap_string, HWND hWnd);
	friend void OnBnClickedToClipboard(HWND hWnd);
	friend char* CopyClipboardToText(HWND hWnd);
	friend void OnBnClickedFromClipboard(HWND hWnd);
};

int CopyTextToClipboard(const char* ap_string, HWND hWnd)
{
	// 저장할 문자열의 길이를 구한다. ('\0'까지 포함한 크기)
	int string_length = strlen(ap_string) + 1;
	// 클리보드로 문자열을 복사하기 위하여 메모리를 할당한다.
	// 클립보드에는 핸들을 넣는 형식이라서 HeapAlloc 함수 사용이 블가능하다.
	HANDLE h_data = ::GlobalAlloc(GMEM_DDESHARE | GMEM_MOVEABLE, string_length);
	// 할당된 메모리에 문자열을 복사하기 위해서 사용 가능한 주소를 얻는다.
	char* p_data = (char*)::GlobalLock(h_data);
	if (NULL != p_data) {
		// 할당된 메모리 영역에 삽입할 문자열을 복사한다.
		memcpy(p_data, ap_string, string_length);
		// 문자열을 복사하기 위해서 Lock 했던 메모리를 해제한다.
		::GlobalUnlock(h_data);

		if (::OpenClipboard(hWnd)) {           // 클립보드를 연다.
			::EmptyClipboard();                  // 클립보드에 저장된 기존 문자열을 삭제한다.
			::SetClipboardData(CF_TEXT, h_data); // 클립보드로 문자열을 복사한다.
			::CloseClipboard();                  // 클립보드를 닫는다.
		}
	}

	return 0;
}

void Clear(HWND hWnd) { // 클립보드를 초기화 시킨다.
	if (::OpenClipboard(hWnd)) {           // 클립보드를 연다.
		::EmptyClipboard();                  // 클립보드에 저장된 기존 문자열을 삭제한다.
	}
	CloseClipboard();
}
void OnBnClickedToClipboard(HWND hWnd)
{
	char string[64];
	// IDC_INPUT_EDIT에서 string 배열에 문자열을 복사한다.
	// 현재 프로그램이 유니코드기반이기 때문에 GetDlgItemTextA 함수를 사용해서
	// 유니코드가 아닌 ASCII 형태의 문자열로 가져온다.
	::GetDlgItemTextA(hWnd, IDC_INPUT_EDIT, string, 64);
	// string에 저장된 문자열을 클립보드로 복사한다.
	CopyTextToClipboard(string, hWnd);
}


char* CopyClipboardToText(HWND hWnd)
{
	unsigned int priority_list = CF_TEXT;
	char* p_string = NULL;
	// 클립보드에는 문자열만 저장할수 있는것이 아니기 때문에 
	// 현재 문자열이 저장되어 있는지 확인한다.
	if (::GetPriorityClipboardFormat(&priority_list, 1) == CF_TEXT) {
		// 클립보드에 있는 비트맵 정보를 얻기 위해서 클립보드를 연다.
		if (::OpenClipboard(hWnd)) {
			// 클립보드에서 문자열이 저장된 메모리의 핸들 값을 얻는다.
			HANDLE h_clipboard_data = ::GetClipboardData(CF_TEXT);
			if (h_clipboard_data != NULL) {
				// 메모리 핸들 값을 이용하여 실제 사용가능한 주소를 얻는다.
				char* p_clipboard_data = (char*)::GlobalLock(h_clipboard_data);
				// 클립보드에 저장된 문자열의 길이를 구한다. ('\0'포함 크기)
				int string_len = strlen(p_clipboard_data) + 1;
				// 클립보드에 저장된 문자열을 저장하기 위해 메모리를 할당한다.
				p_string = new char[string_len];
				// 할당된 메모리에 클리보드 문자열을 복사한다.
				memcpy(p_string, p_clipboard_data, string_len);
				// 문자열을 복사하기 위해서 Lock했던 메모리를 해제한다.
				::GlobalUnlock(h_clipboard_data);
			}
			// 클립보드를 닫는다.
			::CloseClipboard();
		}
	}
	// 클립보드 문자열을 복사한 메모리의 주소를 반환한다.
	return p_string;
}

void OnBnClickedFromClipboard(HWND hWnd) { 
		char* p_string = CopyClipboardToText(NULL);
		char* string=NULL;
	// 클립보드에 저장된 문자열이 없는 경우 NULL을 반환하기 때문에
	// NULL 체크를 하고 사용해야한다.
		int dex = 0;
	if (NULL != p_string) {	
		// 클립보드에 저장된 문자열이 ASCII 형식이기 때문에
		for (int j = 0; j < sizeof(p_string) / sizeof(p_string[0]); j++) {
			if (p_string[j] == '\n') {
				dex = j;
			}
		}
		for (int j = dex; j < sizeof(p_string) / sizeof(p_string[0]); j++) {
			string += p_string[j];
		}
		// SetDlgItemTextA 함수를 사용하여 문자열을 에디트에 저장한다.
		SetDlgItemTextA(hWnd, IDC_INPUT_EDIT, p_string);
		// 클립보드 문자열 복사를 위해 할당한 메모리를 제거한다.
		SendMessageA(gh_list_box2, LB_INSERTSTRING, -1, (LPARAM)string);
		delete[] p_string;
	}
}
// 여기 까지 클립보드 설정 메소드 입니다. 

// 여기는 현 윈도를 찾기 위한 메소드 입니다. 
void Mywin() { // 현 프로그램의 윈도우 클래스를 찾기 위한 메소드 입니다.
	my_win = NULL; my_win_edit = NULL;
	while (my_win = FindWindowEx(NULL, my_win, L"TeamPolorBear", NULL)) {
		my_win_edit = FindWindowEx(my_win, NULL , L"Edit" , NULL);
		if (NULL != my_win_edit) {
			SetWindowPos(my_win_edit, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE);
			break;
		}
	}
}

// 다음줄 부터는 카톡 관련 메소드 입니다.

void FindTalkWindow(HWND hWnd) { // 카톡방 을 찾기 위한 메소드 입니다. 

	SetWindowText(gh_list_box, L"");
	HWND h_find_wnd = NULL;
	TalkWnd* p = g_talk_list;
	wchar_t str[256];

	while (h_find_wnd = FindWindowEx(NULL, h_find_wnd, L"#32770", NULL)) {

		p->h_edit_wnd = FindWindowEx(h_find_wnd, NULL, L"RichEdit20W", NULL);

		if (NULL != p->h_edit_wnd ) {
			p->h_talk_wnd = h_find_wnd;
			GetWindowText(p->h_talk_wnd, p->title, 256);
			swprintf_s(str, 256, L"카톡방 리스트 : %s", p->title);
			SendMessage(gh_list_box,LB_INSERTSTRING, g_talk_count, (LPARAM)str);
			p++;
			g_talk_count++;
		}
	}
}

void FindTalkList(HWND hWnd) { // 카톡방 카톡 리스트를 찾기 위한 메소드 입니다.

	HWND h_find_wnde = NULL;
	Talklst* q = g_talk_lst;
	wchar_t str[256];

	while (h_find_wnde = FindWindowEx(NULL, h_find_wnde, L"#32770", NULL)) {

		q->h_talk_collect = FindWindowEx(h_find_wnde, NULL, L"EVA_VH_ListControl_Dblclk", NULL);

		if (NULL != q->h_talk_collect) {
			q->h_talk_wnd = h_find_wnde;
			q++;
			g_talk_cnt++;
		}
	}
}

	void SendChatData(){ // edit box 의 문자열을 카톡으로 전송 합니다.

		if (g_talk_count == 0) return;
		wchar_t str[256];
		GetWindowText(gh_chat_edit,str,256);
		
		INDEX = SendMessage(gh_list_box2, LB_INSERTSTRING, -1, (LPARAM)str);
		SendMessage(gh_list_box2, LB_SETCURSEL, INDEX, 0);
		TalkWnd *p = g_talk_list;

		for (int i = 0; i < g_talk_count; i++) {
			SendMessage(p->h_edit_wnd, WM_SETTEXT, 0, (LPARAM)str);
			p++;
		}

		Sleep(200);
		p = g_talk_list;
		for (int i = 0; i < g_talk_count; i++) {
			PostMessage(p->h_edit_wnd, WM_KEYDOWN, 0x0000000D, 0x001C001);
			PostMessage(p->h_edit_wnd, WM_KEYUP, 0x0000000D, 0xC01C001);
			p++;
		}
		SetWindowText(gh_chat_edit,L"");
	}

	void FindTalkcollect(HWND hWnd, UINT uMsg) { // 카톡 리스트를 뽑아오기 위한 함수 입니다.  

		if (g_talk_cnt == 0) return;

		srand(time(NULL));
		int i = (rand() % g_talk_cnt);
		Talklst* q = g_talk_lst;

			if (NULL != my_win_edit) { // 문제??? 
				SetForegroundWindow(g_talk_lst[i].h_talk_collect);
				SetFocus(g_talk_lst[i].h_talk_collect);

				// 1) ctrl+a 를 통해 전체 선택
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYDOWN, 0x00000011, 0x001D0001);// ctrl key down
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYDOWN, 0x00000041, 0x001E0001);// a key down
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYUP, 0x00000011, 0xC01D0001);// ctrl key up
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYUP, 0x00000041, 0xC01E0001);// a key up

				// 2) ctrl+c 를 통해 전체 복사
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYDOWN, 0x00000011, 0x001D0001);// ctrl key down
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYDOWN, 0x00000043, 0x002E0001);// c key down
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYUP, 0x00000011, 0xC01D0001);// ctrl key up
				PostMessage(g_talk_lst[i].h_talk_collect, WM_KEYUP, 0x00000043, 0xC02E0001); // c key up

				// 아마 현 Focus는 Ctrl + a, Ctrl + c한 Window(Static Window)일 것 입니다.

				//3) Target Ctrl + V (붙여 넣기) - Edit Control hEdit = Edit Contrl window Handle
				/*
				SetForegroundWindow(my_win_edit);
				SetFocus(my_win_edit);
				Sleep(100); //  -100 msec delay function - Maybe Sleep(100) Ok
				PostMessage(my_win_edit, WM_KEYDOWN, VK_LCONTROL, 0x01); // LCONTROL key down
				PostMessage(my_win_edit, WM_KEYDOWN, 'v', 0x01); // v key down
				PostMessage(my_win_edit, WM_KEYUP, 'v', 0x00); // v key up
				PostMessage(my_win_edit, WM_KEYUP, VK_LCONTROL, 0x00); // LCONTROL key up
				*/

				SendMessage(g_talk_lst[i].h_talk_collect, WM_NULL, 0, 0); // kakao talk 의 대화가 복사된 이후 시점을 보장

				OnBnClickedFromClipboard(g_talk_lst[i].h_talk_collect);

			}
		//SetWindowText(gh_chat_edit, L"");
	}
	void chat(HWND hWnd) {
					// 대화상자에서 ID가 IDC_STR_LIS인 ListBox의 윈도우 핸들 값을 얻는다.
		HWND h_list_box = ::GetDlgItem(hWnd,25005);
		// ListBox에서 선택된 문자열의 위치 값을 얻는다.
		int index = ::SendMessage(h_list_box, LB_GETCURSEL, 0, 0);
		// 위치 값을 성공적으로 얻었다면 해당 위치에 있는 문자열을 삭제한다.
		if (index != -1) {
			temp_string;  // 문자열을 복사하는데 사용할 변수  // 문자열을 복사하는데 사용할 변수
			// ListBox의 index 위치에 있는 문자열을 temp_string에 복사한다.
			::SendMessage(h_list_box, LB_GETTEXT, index, (LPARAM)temp_string);
			// 메시지 박스를 출력해서 해당 항목을 삭제할 것인지 묻는다.
		}
		//QnA(temp_string);
	}

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	// FindTalkcollect(hWnd, uMsg); //대화 내용 가져오기
	chat(hWnd);
	if (uMsg == WM_CREATE) {
		gh_font = CreateFont(12, 0, 0, 0, FW_NORMAL, FALSE, FALSE, 0, DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
			DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, L"굴림체"); // 폰트 설정 

		gh_chat_edit = CreateWindowEx(WS_EX_CLIENTEDGE, L"Edit", NULL, // 대화 에디트 
	    WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL,
	    5,303,280,28, hWnd , (HMENU)25001,NULL,NULL);
		SendMessage(gh_chat_edit, WM_SETFONT, (LPARAM)gh_font,1);

		gh_send_btn = CreateWindow(L"Button", L"전송",
			WS_CHILD | WS_VISIBLE | WS_BORDER | BS_DEFPUSHBUTTON,
			290, 301, 75, 31, hWnd, (HMENU)25002, NULL, NULL); // 전송버튼
		SendMessage(gh_send_btn, WM_SETFONT, (LPARAM)gh_font, 1);
		
		gh_list_box = CreateWindowEx(WS_EX_CLIENTEDGE, L"ListBox", NULL,
			WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL,
			5, 15,440, 100, hWnd, (HMENU)25003, NULL, NULL);
		SendMessage(gh_list_box, WM_SETFONT, (LPARAM)gh_font, 1); // 카톡방 리스트 

		gh_list_box2 = CreateWindowEx(WS_EX_CLIENTEDGE, L"ListBox", NULL,
			WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL,
			5, 100, 440, 200, hWnd, (HMENU)25005, NULL, NULL);
		SendMessage(gh_list_box2, WM_SETFONT, (LPARAM)gh_font, 1); // 대화 기록 

		gh_send_btn2 = CreateWindow(L"Button", L"찾기",
			WS_CHILD | WS_VISIBLE | WS_BORDER | BS_DEFPUSHBUTTON,
			370, 301, 75, 31, hWnd, (HMENU)25004, NULL, NULL);// 찾기버튼
		SendMessage(gh_send_btn2, WM_SETFONT, (LPARAM)gh_font, 1);
		Mywin();
		Clear(hWnd);
		return 0;
	}else if (uMsg == WM_DESTROY) { //WM_DESTROY 메시지 발생시 메시리 큐에 WM_QUIT 메시지를 추가 한다. 
		DestroyWindow(gh_chat_edit);
		DestroyWindow(gh_send_btn);
		DestroyWindow(gh_list_box);
		DeleteObject(gh_font);
		PostQuitMessage(0);  // 프로그램을 종료
	}
	else if (uMsg == WM_COMMAND) {
		if (LOWORD(wParam) == 25002) { // 전송 버튼을 눌럿을 경우 
			SendChatData(); // 카톡 전송
			wchar_t str[256];
			GetWindowText(gh_chat_edit, str, 256);
			if (wcscmp(str,L"시작")) {
				//MessageBox(hWnd, L"수집 시작", L"알림", MB_ICONQUESTION | MB_OKCANCEL);
				//FindTalkcollect(hWnd, uMsg);
			}
		}
		else if (LOWORD(wParam) == 25004) { // 찾기 버튼을 눌럿을 경우
			SetWindowText(gh_list_box, L"");
			FindTalkWindow(hWnd); // 단톡방 찾기
			FindTalkList(hWnd); // 카톡 리스트 찾기
			 //MessageBox(hWnd, temp_string, L"아래의 항목을 삭제하겠습니까?", MB_ICONQUESTION | MB_OKCANCEL);

		}

	 }
	else if (uMsg == WM_RBUTTONDOWN) {
	
	 }
	
	// 자신이 처리하지 않은 메시지들의 기본 작업을 대신 처리해주는 함수 
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}
// 윈도우 클래스 등록 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//hInstance = 프로그램의 instance 핸들 값이 전달 된다.
	//hPrevInstance = 이 매개변수는 현재 사용이 안된다. (항상 NULL) 이다.
	/*lpCmdLine
	 main 함수의 argc,argv 인자처럼 실행 인자가 전달된다.
	 하지만 main 함수 처럼ㄴ 인자들이 배열로ㅗ 하나씩 나누어져 전달되는 것이 아닌 하나의 문자열로 전달 된다.
	  # 실행파일은 포함되지 않는다.
	  ex내 프로그램이 tips.exe이고 실행 창에 'tips.exe Hello!' 라고 입력 했다면 lpCmdLine 에는 Hello! 라는 문자열이 전달된다. 
	*/
	/*nCmdShow 응용프로그램의 초기 시작형식 전달 보통의 경우에는 SW_SHOWDEFAULT 값이 전달되며
	사용자가 아이콘이나 다른 응용프로그램에서 특정값을 지정하면 해당값이
	매개변수로 전달된다.*/
	WNDCLASS wc;

	wchar_t my_class_name[] = L"TeamPolorBear"; // window class 를 등록하기 위한 구조체 
	wc.cbClsExtra = NULL; // 추가 메모리 사용 안함
	wc.cbWndExtra = NULL;// 추가 메모리 사용 안함
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW; // 메인 윈도우의 배경색 지정
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);//화살표 커서 사용
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION); // 제목 표시줄에 logo 아이콘 사용
	wc.hInstance = hInstance; //실행 인스턴스의 핸들 값 지정 
	wc.lpfnWndProc = WndProc;// 기본 메시지 처리 함수 지정 
	wc.lpszClassName = my_class_name; // window class 의 이름 지정
	wc.lpszMenuName = NULL; // 매뉴 사용 안함 
	wc.style = CS_HREDRAW | CS_VREDRAW; // window 그리기 특성 설정 

	RegisterClass(&wc); // wc에 저장된 정보를 기준으로 window class 등록 

	// 윈도우 생성 
	int cx = GetSystemMetrics(SM_CXSCREEN); // 모니터의 수평 해상도를 얻는다
	int cy = GetSystemMetrics(SM_CYSCREEN); // 모니터의 수직 해상도를 얻는다 
	HWND hWnd = CreateWindow(my_class_name, L"test", 
		 WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, (cx/3), (cy/3), 465, 374, NULL, NULL, hInstance, NULL); //WS_EX_TOPMOST = 최상위 윈도우 속성을 적용 한다. 
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	// 프로그램에 전달된 메시지를 번역하고 실행하는 작업 
	MSG msg;// 읽어온 메시지를 저장할 구조체 
	while (GetMessage(&msg, NULL, 0, 0)) { // 메시지를 큐에서 읽는 함수 
		TranslateMessage(&msg); // 가상 키 메시지이면 ASCII 형태의 메시지를 추가로 생성 
		DispatchMessage(&msg); // 변화ㅓㄴ된 메시지를 처리하는 함수 
	}

	/*GetMessage
	메시지 큐에서 메시지를 읽을 떄 사용하는 함수이고 보통의 경우에는 0 아닌 값을 반환
	하지만 메시지중에서 WM_QUIT메시지가 수신되어 GetMessage 함수로 읽게 되면 0 값을 반환하여 while 문반복이 종료 
	이말은 winmain 함수가 종료 된다는 뜻이고 프로그램이 종료된단 의미 이다. 
	WM_QUIT 메시지 수신은 프로그램이 종료 된다는 것 의미 
	WM_QUIT 메시지를 전달해 프로그램을 종료하고 싶다면 PostQuitMessage() 함수를 사용 하면 된다.
	ex. PostQuitMessage(0);
	*/

	/*TranslateMessage 
	현재 수신된 메시지가 WM_KEYDOWN 과 같이 가상 키 와 같은 메시지 이면
	키보드 배열 과 관련된 값이 아닌ascii 값으로 해석된 WM_CHAR와 같은 추가 메시지 발생
	*/

	/*DispatchMessage
	 현재 수신된 메시지를 처리하는 함수 이 함수가 호출되면 해당 메시지를 처리하기 위해 내부적으로 사전 작업들이 진행되고 사용자 메시지 처리기인 
	 WndProc 함수를 호출 한다. WndProc 함수는 Winmain 함수위에 사용자가 직접작성한 함수이며 이함수에서 메시지 별로 사용자가 원하는 작업을 구현 하면 된다.
	 DispatchMessage 함수 내부에서 사용자가 만든 WndProc 함수를 호출할수 있는 이유는 window class  를 등록할 때 lpfnWndproc에WndProc 함수의 주소 대입했기 때문에
	 호출가능 
	*/
	return msg.wParam;
}
