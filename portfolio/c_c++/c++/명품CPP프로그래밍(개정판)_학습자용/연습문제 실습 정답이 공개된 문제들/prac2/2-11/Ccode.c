#define _CRT_SECURE_NO_WARNINGS//비주얼 스튜디오에서 scanf로 인한 오류를 막기 위한 선언문
#include <stdio.h>
int main_C() { // 문제에 주어진 코드
	int k, n=0;
	int sum=0;
	printf("끝 수를 입력하세요>>");
	scanf("%d", &n);
	for(k=1; k<=n; k++) {
		sum += k;
	}
	printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum);
	return 0;
}