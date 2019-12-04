#define _CRT_SECURE_NO_WARNINGS //비주얼 스튜디오에서 scanf로 인한 오류를 막기 위한 선언문

#include <stdio.h>
int get() {
	int c;
	printf("숫자를 입력하세요>>");
	scanf("%d", &c);
	return c;
}