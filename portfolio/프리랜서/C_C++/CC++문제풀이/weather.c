/*
#pragma warning(disable : 4996)
#include<stdio.h>
#include <stdlib.h>       //srand
#include <time.h>     //time

int getMonthDay(int month);
void getday(double** day, int month, int mday);
double getHiDay(double** day, int month);
double getLowDay(double** day, int month);
double getAve(double** day, int month);
void display(double** day, int month);
double ar = 1,table_temp=-10;
double days[31] = { -2.1,3.5,4.0,5.0,-3.2,0.0,2.8,4.5,6.0,8.4,10.1,9.2,7.5,3.6,-1.0,-3.5,3.0,5.0,6.7,8.9,12.3,15.2,13.2,12.1,17.5,20.0,18.2,16.3,14.1,15.0,12.8 };
double table[50] = { 0, };
int main(void) {
	for (int i = 0; i < 50; i++) { // 온도 테이블 생성 
		table[i] = table_temp++;
	}
	int month,mday=0;
	double* day= NULL;
	int L=0, H= 0;
		double  A=0.0;
	printf("월을 입력하세요 : ");
	scanf("%d", &month);
	mday=getMonthDay(month);
	getday(&day, month,mday);
	printf("%d월 기온 보고서\n", month);
	printf("=======================================");
	H=getHiDay(&day, month);
	printf("\n가장 더운날 :           %d일\n",(H+1));
	L = getLowDay(&day, month);
	printf("\n가장 추운날 :           %d일\n",(L+1));
	A = getAve(&day, month);
	printf("\n평균 기온 :              %f도\n",A);
	printf("=======================================");
	display(&day,month);
	return 0;
}
int getMonthDay(int month){
	int temp;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {// 31
		temp = 31;
		return temp;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) { // 30
		temp = 30;
		return temp;
	}
	else {// 2월 , 28
		temp = 28;
		return temp;
	}
 }
void getday(double** day, int month,int mday) {
	srand((unsigned)time(NULL));              //srand로 초기화
	*day = (double**)calloc(mday, sizeof(double));
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {// 31
		printf("온도를 입력하시오 (1 ~ 31일) : ");
		for (int i = 0; i < 31; i++) {
			//scanf("%f", day[i]);
			(*day)[i] = ar++;
			//printf("%0.1f\n",(*day)[i]);
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) { // 30
		printf("온도를 입력하시오 (1 ~ 30일) : ");
		for (int i = 0; i < 30; i++) {
			//scanf("%f", day[i]);
			(*day)[i] = days[i];
		}
	}
	else {// 2월 , 28
		printf("온도를 입력하시오 (1 ~ 28일) : ");
		for (int i = 0; i < 28; i++) {
			//scanf("%f", day[i]);
			(*day)[i] = ar++; //printf("%0.1f\n", (*day)[i]);
		}
	}
}
double getHiDay(double** day, int month) {
	double high = 0.0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {// 31
		for (int i = 0; i < 31; i++) {
			if ((*day)[i] > high) {
				  high = i;
			}
		}
		return high;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) { // 30
		for (int i = 0; i < 30; i++) {
			if ((*day)[i] > high) {
				high = i;
			}
		}
		return high;
	}
	else {// 2월 , 28
		for (int i = 0; i < 28; i++) {
			if ((*day)[i] > high) {
				high = i;
			}
		}
		return high;
	}
}
double getLowDay(double** day, int month) {
	double low = 99.9;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {// 31
		for (int i = 0; i < 31; i++) {
			if ((*day)[i]< low) {
				//low = day[i];
				  low = i;
				  //printf("%d , \n", i);
			}
		}
		return low;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) { // 30
		for (int i = 0; i < 30; i++) {
			if ((*day)[i] < low) {
				//low = day[i];
				  low = i;
			}
		}
		return low;
	}
	else {// 2월 , 28
		for (int i = 0; i < 28; i++) {
			if ((*day)[i] < low) {
				//low = day[i];
				  low = i;
			}
		}
		return low;
	}
}
double getAve(double** day, int month) {
	double Ave = 0.0;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {// 31
		for (int i = 0; i < 31; i++) {
			Ave += (*day)[i];
			//printf("%0.1f, ", day[i]);
		}
		Ave = Ave / 31;
		return Ave;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) { // 30
		for (int i = 0; i < 30; i++) {
			Ave += (*day)[i];
		}
		Ave = Ave / 30;
		return Ave;
	}
	else {// 2월 , 28
		for (int i = 0; i < 28; i++) {
			Ave += (*day)[i];
		}
		Ave = Ave / 28 ;
		return Ave;
	}
}
void display(double** day, int month)
{
	int start = 0, end = 0,inx=0; \
		char temperature[31][50] = {' ',};
	printf("\n그래프 출력을 원하는 기간 (시작일 , 기간) : ");
	scanf("%d", &start);
	scanf("%d",&end);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {// 31
		for (int i = 0; i < 31; i++) {
			temperature[i][0] = (i+0);
			for (int j = 0; j < 50; j++) { // -10 == 0 40 == 49 0 == 10 
				if (j == 10) { // 0도 일 경우 
					temperature[i][j] = '|';
				}
			}
		}
		for (int i = start; i < (start + end); i++) {
			for (int j = 0; j < 50; j++) { // -10 == 0 40 == 49 0 == 10 
				if ((*day)[i] == table[j]) {
					temperature[i][j] = '*';
				}
			}
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) { // 30
		for (int i = 0; i < 31; i++) {
			temperature[i][0] = (i + 0);
			for (int j = 0; j < 50; j++) { // -10 == 0 40 == 49 0 == 10 
				if (j == 10) { // 0도 일 경우 
					temperature[i][j] = '|';
				}
			}
		}
		for (int i = start; i < (start + end); i++) {
			for (int j = 0; j < 50; j++) { // -10 == 0 40 == 49 0 == 10 
				if ((*day)[i] == table[j]) {
					temperature[i][j] = '*';
				}
			}
		}
	}
	else {// 2월 , 28
		for (int i = 0; i < 31; i++) {
			temperature[i][0] = (i + 0);
			for (int j = 0; j < 50; j++) { // -10 == 0 40 == 49 0 == 10 
				if (j == 10) { // 0도 일 경우 
					temperature[i][j] = '|';
				}
			}
		}
		for (int i = start; i < (start + end); i++) {
			for (int j = 0; j < 50; j++) { // -10 == 0 40 == 49 0 == 10 
				if ((*day)[i] == table[j]) {
					temperature[i][j] = '*';
				}
			}
		}
	}
	printf("\nday:================0===========================================\n");
	for (int i = start; i < (start+end); i++) {
			printf("%d", temperature[i][0]);
		for (int j = 0; j < 50; j++) { // -10 == 0 40 == 49 0 == 10 
			if (j == 0) {
			}
			else {
				printf(" %c", temperature[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n   :================0===========================================\n");
}*/