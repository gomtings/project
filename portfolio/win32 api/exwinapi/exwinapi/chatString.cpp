#include "pch.h"
#include<string>
#include <wchar.h>
using namespace std;
class String {
private:
	wstring krQ[4]= {L"안녕하세요.",L"반갑습니다",L"저는 챗봇이에요~",L"안녕?" };
	wstring krA[4] = { L"네 안녕하세요",L"네 저도 가워요",L"누구세요7",L"안녕?" };
public:
	wchar_t QnA(wchar_t *str) {
		for (int i = 0; i < 4; i++) {
			wchar_t *str2 = krQ[i];
			wcscmp(str2 , str);
		}
	
	}
};