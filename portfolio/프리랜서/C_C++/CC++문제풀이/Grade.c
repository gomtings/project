/*
#pragma warning(disable : 4996)
#include<stdio.h>
int main(void) {
	char name[7][10] = { "1번","2번","3번","4번","5번","과목총점","과목평균"};// print 할 문자열 집합 입니다.
	int scores[6][5]; // 각 판매 실적 데이터가 저장될 배열 입니다.
    double aves[5]; // 평균 데이터 저장
	int total=0;
	for (int i = 0; i < 5; i++) {
		printf("%+s(국어, 영어, 수학) :", name[i]);
		for (int j = 0; j < 3; j++) {
			scanf("%d",&scores[i][j]);
			total += scores[i][j];
		}
		scores[i][3]= total;
		total = 0;
	}
	scores[5][0] = scores[0][0] + scores[1][0] + scores[2][0] + scores[3][0] + scores[4][0];// 국어 총합
	scores[5][1] = scores[0][1] + scores[1][1] + scores[2][1] + scores[3][1] + scores[4][1];// 영어 총합
	scores[5][2] = scores[0][2] + scores[1][2] + scores[2][2] + scores[3][2] + scores[4][2];// 수학 총합
	scores[5][3] = scores[0][3] + scores[1][3] + scores[2][3] + scores[3][3] + scores[4][3];//  총합
	printf("=============================================\n");
	printf("번호       국어     영어     수학      총합\n");
	printf("=============================================\n");
	for (int i = 0; i < 5; i++) {
		printf("     %s",name[i]);
		for (int j = 0; j < 4; j++) {
			printf("    %d   ", scores[i][j]);
		}
		printf("\n");
	}
	printf("%s    ", name[5]);
	printf("%d      %d      %d       %d\n", scores[5][0], scores[5][1], scores[5][2], scores[5][3]); // 분기 평균
	aves[0] = (scores[5][0] / 5);
	aves[1] = (scores[5][1] / 5);
	aves[2] = (scores[5][2] / 5);
	aves[3] = (scores[5][3] / 5);
	printf("============================================================\n");
	printf("%s    ", name[6]);
	printf("%0.2f    %0.2f    %0.2f     %0.2f\n",(aves[0]), (aves[1]), (aves[2]), (aves[3])); // 분기 평균
	printf("============================================================\n");
	return 0;
}*/