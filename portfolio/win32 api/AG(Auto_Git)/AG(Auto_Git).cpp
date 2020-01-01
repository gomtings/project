// AG(Auto_Git).cpp : 애플리케이션에 대한 진입점을 정의합니다.
//
#include "pch.h"
#include "tipsware.h"
#include <string.h> //문자열 관련 함수 헤더파일
#include <shellapi.h>  // ShellExecute 함수를 사용하기 위해
#include "resource.h"

#define ID_NUM_EDIT    1010   // '학번' 에디트의 ID
#define ID_NAME_EDIT   1011   // '이름' 에디트의 ID
#define ID_KOR_EDIT    1012   // '국어 점수' 에디트의 ID
#define ID_ENG_EDIT    1013   // '영어 점수' 에디트의 ID

#pragma warning(disable : 4996)
char id[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
char Repositories[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
char pass[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
char commit[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수

char id_2[256];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
char pass_2[256];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
char commit_2[256];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
int x, y;
int file_flag = 0; // 처음 첫 1회 동작을 위한 기준값 
char cppath[520] ; // 사용자가 선택한 텍스트 파일의 경로를 저장할 변수

TCHAR temp1[512];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
TCHAR temp2[512];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
TCHAR temp3[512];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
TCHAR temp4[512];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
char m_buf[2048]; // Edit_text 파일의 텍스트를 저장 하기 위한 변수  
HWND di_win, di_win_edit; //  현재 자신의 윈도우 핸들 저장 , 현 윈도우의 에디트의 핸들 저장

/* 함수의 원형을 선언 합니다.*/
int size(TCHAR STR[]);
void Open_path_File();
void OpenTextFile();
void SaveTextFile();
void Mywin();
void OnDestroy();
int CALLBACK MyMenuDialogProc(HWND ah_dlg, UINT a_message_id, WPARAM wParam, LPARAM lParam);
int CALLBACK MyMenuDialog_info(HWND ah_dlg, UINT a_message_id, WPARAM wParam, LPARAM lParam);
void OnCommand(INT32 a_ctrl_id, INT32 a_notify_code, void* ap_ctrl);

struct AppData  // 프로그램에서 사용할 내부 데이터
{
	TargetData* p_target;  // 매크로 대상의 정보
};

AppData* p_data;  // 응용 프로그램의 내부 데이터 주소를 가져온다.

int size(TCHAR STR[]) {
	int size = 0;
	for (int i = 0; i < 1024; i++) { // 실제 문자열의 크기를 구함. 
		size++;
		if (STR[i] == NULL) {
			break;
		}
	}
	return size;
}

void Open_path_File()   // 저장된 GIT_bash 의 경로를 가져오기 위한 함수 입니다. 
{
	char path[MAX_PATH] = ""; // 사용자가 선택한 텍스트 파일의 경로를 저장할 변수
	int ctid = 0;
	int num = 0;
	int index = 0;
	DWORD dwRead;  // 실제 읽어온 바이트 수를 저장

	HANDLE m_hFile = CreateFile("C:\\Program Files (x86)\\AG(Auto_Git)\\git_path.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);//git_path  Edit_text

	if (m_hFile != INVALID_HANDLE_VALUE) // 파일 열기에 실패시에 CreateFile은 INVALID_HANDLE_VALUE 를 리턴한다.

	{
		ReadFile(m_hFile, path, 512, &dwRead, NULL);
		CloseHandle(m_hFile);
		InvalidateRect(NULL, NULL, TRUE); // \git - bash.exe
	}
	strcat(path, "\\git-bash.exe");
	int ix = 0;
	for (int i = 0; i < MAX_PATH; i++) {
		//if (path[i] == '\\') {
			// cppath[(ix)] = '\\';
			// ix = ix + 1;
	//	}
		cppath[ix] = path[i];
		ix++;
	}
}

void OpenTextFile()   // 저장된 사용자 입력 정보를 읽기 위한 함수; 
{
	int ctid = 0;
	int num = 0;
	int index = 0;
	DWORD dwRead;  // 실제 읽어온 바이트 수를 저장

	HANDLE m_hFile = CreateFile("C:\\Program Files (x86)\\AG(Auto_Git)\\Edit_text.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);//git_path  Edit_text

	if (m_hFile != INVALID_HANDLE_VALUE) // 파일 열기에 실패시에 CreateFile은 INVALID_HANDLE_VALUE 를 리턴한다.

	{
		ReadFile(m_hFile, m_buf, 2048, &dwRead, NULL);

		CloseHandle(m_hFile);
		InvalidateRect(NULL, NULL, TRUE);
	}
	num = size(m_buf);

	for (int i = 0; i < num; i++) {
		if (m_buf[i] == ',') {
			ctid = ctid + 1;
			index = 0;
			i++;
		}
		if (ctid == 0) {
			temp1[index] = m_buf[i];
		}
		else if (ctid == 1) {
			temp2[index] = m_buf[i];
		}
		else if (ctid == 2) {
			temp3[index] = m_buf[i];
		}
		else if (ctid == 3) {
			temp4[index] = m_buf[i];
		}
		index++;
	}
}
void SaveTextFile()   // 에디트 의 문자열을 파일 로 저장 해주는 함수 
{
	TCHAR save_id[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
	TCHAR save_Repositories[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
	TCHAR save_pass[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
	TCHAR save_commit[64];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수
    TCHAR nn[2] = "\n";  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수

	TCHAR string[1024];  // 에디트 컨트롤에 입력된 문자열을 저장할 배열 변수

	DWORD dwRead;  // 실제 쓰여진 바이트 수를 저장

	GetCtrlName(FindControl(1010), save_id, 64);
	GetCtrlName(FindControl(1011), save_Repositories, 64);
	GetCtrlName(FindControl(1012), save_pass, 64);
	GetCtrlName(FindControl(1013), save_commit, 64);

	strcpy(string, save_id);
	strcat(string, ",");
	strcat(string, save_Repositories);
	strcat(string, ",");
	strcat(string, save_pass);
	strcat(string, ",");
	strcat(string, save_commit);

	HANDLE m_hFile = CreateFile(TEXT("C:\\Program Files (x86)\\AG(Auto_Git)\\Edit_text.txt"), GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

	if (m_hFile != INVALID_HANDLE_VALUE)
	{
		int num = 0;
		num = size(string);
		WriteFile(m_hFile, string, num, &dwRead, NULL);

		CloseHandle(m_hFile);
		InvalidateRect(NULL, NULL, TRUE);
	}
}

void Mywin() { // 현 프로그램의 윈도우 클래스를 찾기 위한 메소드 입니다.
	di_win = NULL; di_win_edit = NULL;
	while (di_win = FindWindowEx(NULL, di_win, "#32770", NULL)) {
		di_win_edit = FindWindowEx(di_win, NULL, "Edit", NULL);
		if (NULL != di_win_edit) {
			break;
		}
	}
}

void OnDestroy()  // 응용 프로그램이 종료될 때 호출되는 함수
{
	SaveTextFile(); // 에디트 컨트롤의 문자열을 파일로 저장하는 함수 
}

int CALLBACK MyMenuDialogProc(HWND ah_dlg, UINT a_message_id, WPARAM wParam, LPARAM lParam) // 사용자 메시지 창 함수 
{
	Mywin();// 메시지 박스 창을 찾는다 
	int size = 0;// 문자열의 크기를 구하기 위한 변수 
	// 대화상자의 메뉴나 컨트롤 항목을 선택했을 때 발생하는 메시지
	// WM_COMMAND 메시지는 다양한 컨트롤이 사용하기 때문에 어떤 컨트롤이 선택되었는지를 
	// 확인할 수 있도록 wParam 항목의 하위 16비트에 컨트롤 ID가 저장되어 있습니다.
	// SetWindowText(di_win_edit,cppath);
	if (LOWORD(wParam) == IDBUT) {
		DWORD dwRead;  // 실제 쓰여진 바이트 수를 저장
		TCHAR git_path[1024]="";
		GetWindowTextA(di_win_edit, git_path, 1024);
		for (int i = 0; i < 1024; i++) {// 실제 문자열의 크기를 구함. 
			if (git_path[i] == '\0') {
				break;
			}
			size++;
		}
		HANDLE m_hFile = CreateFile("C:\\Program Files (x86)\\AG(Auto_Git)\\git_path.txt", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		if (m_hFile != INVALID_HANDLE_VALUE)
		{
			WriteFile(m_hFile, git_path, size, &dwRead, NULL);
			CloseHandle(m_hFile);
			InvalidateRect(NULL, NULL, TRUE);
		}
	}
	else if (a_message_id == WM_COMMAND) {
		// '확인(IDOK)' 또는 '취소(IDCANCEL)' 버튼이 눌러진 경우
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) {
			// 대화 상자를 종료하는 함수, 어떤 버튼에 의해서 종료되었는지 
			// 확인할 수 있도록 두 번째 인자에 버튼 ID 값을 넣는다.
			EndDialog(ah_dlg, LOWORD(wParam));
			return 1;
		}
	}
	return 0;
}
int CALLBACK MyMenuDialog_info(HWND ah_dlg, UINT a_message_id, WPARAM wParam, LPARAM lParam) // 사용자 메시지 창 함수 
{
	if (a_message_id == WM_COMMAND) {
		// '확인(IDOK)' 또는 '취소(IDCANCEL)' 버튼이 눌러진 경우
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL) {
			// 대화 상자를 종료하는 함수, 어떤 버튼에 의해서 종료되었는지 
			// 확인할 수 있도록 두 번째 인자에 버튼 ID 값을 넣는다.
			EndDialog(ah_dlg, LOWORD(wParam));
			return 1;
		}
	}
	return 0;
}

// 컨트롤을 조작했을 때 호출할 함수 만들기
// 컨트롤의 아이디(a_ctrl_id), 컨트롤의 조작 상태(a_notify_code), 선택한 컨트롤 객체(ap_ctrl)
void OnCommand(INT32 a_ctrl_id, INT32 a_notify_code, void* ap_ctrl)
{
	if (a_ctrl_id == 1001) {
		p_data = (AppData*)GetAppData();
		// 메모장 프로그램의 'Window Class' 명칭이 'notepad' 입니다. 따라서
		// 'notepad' 이름으로 대상을 검색합니다. 대상을 찾았다면 NULL 아닌 값이 저장됩니다.
		p_data->p_target = FindTargetImage(0, "mintty", NULL); //mintty
		if (p_data->p_target != NULL) { // update 를 파트 입니다.

			// 메모장의 클라이언트 영역에서 (10, 10) 지점을 화면 좌표로 변환합니다.
			GetMousePosFromTarget(p_data->p_target, &x, &y, 10, 10);
			// 메모장에 글을 쓰기 위해서 (x, y)에 마우스를 클릭해서 메모장을 선택합니다.
			MouseClickWrite(x, y);
			// 에디트 컨트롤에 저장된 문자열을 str 배열에 복사한다.

			GetCtrlName(FindControl(1010), id, 64);
			GetCtrlName(FindControl(1011), Repositories, 64);
			GetCtrlName(FindControl(1012), pass, 64);
			GetCtrlName(FindControl(1013), commit, 64);

			strcpy(id_2, "git remote add origin ssh ://git@github.com/");
			strcat(id_2, id);
			strcat(id_2, "/");
			strcat(id_2, Repositories);
			strcat(id_2, ".git");

			strcpy(pass_2, "cd ");
			strcat(pass_2, pass);

			strcpy(commit_2, "git commit - m \"");
			strcat(commit_2, commit);
			strcat(commit_2, "\"");

			// 한글 모드라고 가정하고 str 배열에 저장된 문자열을 메모장에 씁니다.
			InputNormalString("cd", 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString(pass_2, 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString("git init", 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString(id_2, 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString("git remote rm origin", 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString("git add .", 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString(commit_2, 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString("git push -u origin +master", 0);
			InputNormalString("\n", 1);
			Sleep(1000);

		}
	}
	else if (a_ctrl_id == 1002) {  // uplode 를 파트 입니다. 
		p_data = (AppData*)GetAppData();
		// 메모장 프로그램의 'Window Class' 명칭이 'notepad' 입니다. 따라서
		// 'notepad' 이름으로 대상을 검색합니다. 대상을 찾았다면 NULL 아닌 값이 저장됩니다.
		p_data->p_target = FindTargetImage(0, "mintty", NULL); //mintty
		if (p_data->p_target != NULL) {

			// 메모장의 클라이언트 영역에서 (10, 10) 지점을 화면 좌표로 변환합니다.
			GetMousePosFromTarget(p_data->p_target, &x, &y, 10, 10);
			// 메모장에 글을 쓰기 위해서 (x, y)에 마우스를 클릭해서 메모장을 선택합니다.
			MouseClickWrite(x, y);
			// 에디트 컨트롤에 저장된 문자열을 str 배열에 복사한다.
			InputNormalString("cd", 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString(pass_2, 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString("git init", 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString(id_2, 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString("git remote rm origin", 0);
			InputNormalString("\n", 1);
			Sleep(1000);
			InputNormalString("git pull origin master", 0);
			InputNormalString("\n", 1);
			Sleep(1000);

		}
	}// explorer .
	else if (a_ctrl_id == IDM_EXIT) {
		DialogBox(NULL, MAKEINTRESOURCE(IDD_ITEM_MENU), NULL, MyMenuDialogProc); //  git_bash 경로를 설정 입력 받기 위한 다이얼 로그 입니다. 
	}
	else if (a_ctrl_id == IDM_ABOUT) {
		DialogBox(NULL, MAKEINTRESOURCE(IDD_HALP), NULL, MyMenuDialog_info);// 개밟자 정보를 출력하는 다이얼 로그 입니다. 
	}
	else if (a_ctrl_id == ID_CALL) { // bash 를 실행 한다. 
		Open_path_File();
		ShellExecute(NULL, "open", cppath, NULL, NULL, SW_SHOW);//win32 api 함수 입니다. (Git Bash 를 실행 한다. );"C:\\Program Files\\Git\\git-bash.exe"
	}
	else if (a_ctrl_id == IDYES) {
		p_data = (AppData*)GetAppData();
		// 메모장 프로그램의 'Window Class' 명칭이 'notepad' 입니다. 따라서
		// 'notepad' 이름으로 대상을 검색합니다. 대상을 찾았다면 NULL 아닌 값이 저장됩니다.
		p_data->p_target = FindTargetImage(0, "mintty", NULL); //mintty
		// 메모장의 클라이언트 영역에서 (10, 10) 지점을 화면 좌표로 변환합니다.
		GetMousePosFromTarget(p_data->p_target, &x, &y, 10, 10);
		// 메모장에 글을 쓰기 위해서 (x, y)에 마우스를 클릭해서 메모장을 선택합니다.
		InputNormalString("cd", 0);
		InputNormalString("\n", 1);
		Sleep(1000);
		InputNormalString("explorer .", 0);
		InputNormalString("\n", 1);
}
}

// 컨트롤을 조작할 때 호출할 함수를 설정한다.
// CMD_MESSAGE(OnCommand, OnDestroy)
CMD_USER_MESSAGE(OnCommand, OnDestroy, NULL)
int main()
{
	int flag = 0;
	int width = 420, height = 180;
	ChangeWorkSize(width, height); // 작업 영역을 설정한다.


		// 현재 윈도우의 속성 정보를 얻는다!
	int wnd_style = ::GetWindowLong(gh_main_wnd, GWL_STYLE);
	// 현재 속성 정보에서 WS_THICKFRAME 속성만 제거하고 속성을 다시 설정한다.
	// WS_THICKFRAME 속성이 윈도우 크기를 변경하는 속성이라서 마우스로
	// 윈도우 테두리를 잡아서 크기를 변경할 수 없게 된다.
	::SetWindowLong(gh_main_wnd, GWL_STYLE, wnd_style & ~WS_THICKFRAME);

	AppData data = { NULL };  // 프로그램이 내부적으로 사용할 메모리를 선언한다.
	SetAppData(&data, sizeof(data));  // 지정한 변수를 내부 데이터로 저장한다.i
	if (flag == 0) {
		SHCreateDirectory(NULL, L"C:\\Program Files (x86)\\AG(Auto_Git)");
		OpenTextFile();
		Open_path_File();
		ShellExecute(NULL, "open", cppath, NULL, NULL, SW_SHOW);//win32 api 함수 입니다. (Git Bash 를 실행 한다. );"C:\\Program Files\\Git\\git-bash.exe"
		flag = 1;
		// printf(10, 200, RGB(0, 0, 255), cppath);
	}
	// 프로그램에서 사용할 버튼을 생성합니다.
	// CreateButton("git_bash  찾기", 10, 10, 105, 28, 1000);
	CreateButton("git update", 10, 5, 105, 28, 1001);
	CreateButton("git down", 120, 5, 105, 28, 1002);
	// 메모장에 쓸 문자열을 입력할 에디트 컨트롤을 생성한다.
	printf(10, 40, RGB(0, 0, 255), "git  id input");
	CreateEdit(100, 40, 300, 21, 1010, 0);
	printf(10, 70, RGB(0, 0, 255), "git  Repositories name input");
	CreateEdit(200, 70, 200, 21, 1011, 0);
	printf(10, 100, RGB(0, 0, 255), "경로 입력");
	CreateEdit(100, 100, 300, 21, 1012, 0);
	printf(10, 130, RGB(0, 0, 255), "commit  name 입력");
	CreateEdit(150, 130, 250, 21, 1013, 0);

	SetCtrlName(FindControl(1010), temp1);
	SetCtrlName(FindControl(1011), temp2);
	SetCtrlName(FindControl(1012), temp3);
	SetCtrlName(FindControl(1013), temp4);

	ShowDisplay(); // 정보를 윈도우에 출력한다.

	return 0;
}
