#include "pch.h"
#include<string>
#include <wchar.h>
using namespace std;
class String {
private:
	wstring krQ[4]= {L"�ȳ��ϼ���.",L"�ݰ����ϴ�",L"���� ê���̿���~",L"�ȳ�?" };
	wstring krA[4] = { L"�� �ȳ��ϼ���",L"�� ���� ������",L"��������7",L"�ȳ�?" };
public:
	wchar_t QnA(wchar_t *str) {
		for (int i = 0; i < 4; i++) {
			wchar_t *str2 = krQ[i];
			wcscmp(str2 , str);
		}
	
	}
};