#pragma warning(disable : 4996)
#include<stdio.h>
/*
int main(void) {
	int income = 0, grade = 0, tex = 0,index=0,total_tax=0;
	int incomes[3], texs[3], rate[3] = {2,5,7};
	printf("1)�� ���Ծ� : ");
	scanf("%d", &income);
	printf("2)���(1:��Ȱ ��ȣ �����,2:���� ������,3:�Ϲ�): ");
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
	
	if (income >= 0 || income < 500000) { // tex 2% ���� �Դϴ�.
		tex = income / 100 * 2;
	}
	else if (income >= 500000 || income < 1000000) {
		if (grade == 1 || grade == 2) {// tex 2% ���� �Դϴ�.
			tex = income / 100 * 2;
		}else {// tex 5% ���� �Դϴ�.
				tex = income / 100 * 5;
		}
	}
	else if (income >= 1000000) {
		if (grade == 1 || grade == 2) {
			if (income == 1000000) {// tex 5% ���� �Դϴ�.
				tex = income / 100 * 5;
			}
			else {// tex 7% ���� �Դϴ�.
				tex = income / 100 * 7;
			}
		}
	}
	printf("***********************************\n");
	printf("�� ���Ծ� : %d    �� �� : %d \n", income, grade);
	printf("***********************************\n");
	printf("�ݾ�                ����             ����\n");
	printf("------------------------------------\n");
	for (int i = 0; i < index; i++) {
		printf("�ݾ� :    %d    ����          %d%% ����      %d\n", incomes[i], rate[i],texs[i]);
		total_tax += texs[i];
	}
	printf("------------------------------------\n");
	printf("�� ���� : %d\n", total_tax);
	printf("====================================\n");
	return 0;
}*/