#pragma warning(disable : 4996)
#include<stdio.h>
/*
int main(void) {
	int income = 0, grade = 0, tex = 0,index=0,total_tax=0;
	int incomes[3], texs[3], rate[3] = {2,5,7};
	printf("1)월 수입액 : ");
	scanf("%d", &income);
	printf("2)등급(1:생활 보호 대상자,2:국가 유공자,3:일반): ");
	scanf("%d", &grade);
	if (income < 500000) {
		index = 1;
		texs[0]= income / 100 * 2;
	}
	else if (income < 1000000) {
		if (income == 500000) {
			index = 1;
			incomes[0] = income;
			texs[0] = incomes[0] / 100 * 2;
		}
		else {
		index = 2;
		incomes[0] = income- 500000;
		incomes[1] = 500000;
		texs[0] = incomes[0] / 100 * 2;
		texs[1] = incomes[1] / 100 * 5;
		}

	}
	else if (income >= 1000000) {
		if (income == 1000000) {
			index = 2 ;
			incomes[0] = 500000;
			incomes[1] = 500000;
			texs[0] = incomes[0] / 100 * 2;
			texs[1] = incomes[1] / 100 * 5;
		}
		else {
		index = 3;
		incomes[0] = 500000;
		incomes[1] = 500000;
		incomes[2] = income - 1000000;
		texs[0] = incomes[0] / 100 * 2;
		texs[1] = incomes[1] / 100 * 5;
		texs[2] = incomes[2] / 100 * 7;
		}

	}
	else {

	}
	
	if (income >= 0 || income < 500000) { // tex 2% 구간 입니다.
		tex = income / 100 * 2;
	}
	else if (income >= 500000 || income < 1000000) {
		if (grade == 1 || grade == 2) {// tex 2% 구간 입니다.
			tex = income / 100 * 2;
		}else {// tex 5% 구간 입니다.
				tex = income / 100 * 5;
		}
	}
	else if (income >= 1000000) {
		if (grade == 1 || grade == 2) {
			if (income == 1000000) {// tex 5% 구간 입니다.
				tex = income / 100 * 5;
			}
			else {// tex 7% 구간 입니다.
				tex = income / 100 * 7;
			}
		}
	}
	printf("***********************************\n");
	printf("월 수입액 : %d    등 급 : %d \n", income, grade);
	printf("***********************************\n");
	printf("금액                세율             세금\n");
	printf("------------------------------------\n");
	for (int i = 0; i < index; i++) {
		printf("금액 :    %d    세율          %d%% 세금      %d\n", incomes[i], rate[i],texs[i]);
		total_tax += texs[i];
	}
	printf("------------------------------------\n");
	printf("총 세금 : %d\n", total_tax);
	printf("====================================\n");
	return 0;
}*/