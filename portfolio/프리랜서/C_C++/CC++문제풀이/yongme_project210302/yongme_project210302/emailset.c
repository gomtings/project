/*
#pragma warning(disable : 4996)
#include<stdio.h>
#include <string.h>
int main(void) {
	char Email[100] = "";

	char name[50] = "";
	char system[50] = "";
	char domain[50] = "";
	char organization[50] = "";
	char country[50] = "";
	
	int mamu = 0, temp = 0, index = 0, index2 = 0, dat_index = 0;
	int dat[10];
	printf("메뉴\n");
	printf("1 : E-mail --> 각 요소로 분리하기\n2 : 각 요소 --> E-mail 만들기\n");
	printf("선택하세요:");
	scanf("%d", &mamu);
	switch (mamu)
	{
	case 1:
	{
		printf("E-mail을 입력 하시오 :");
		scanf("%s", &Email);
		strlwr(Email); // 문자열 소문자 변환 
		if (strstr(Email, "@") != NULL) {
			for (int i = 0; i < 100; i++) {
				if (Email[i] == '@') {
					temp = i;
					break;
				}
			}
			for (int i = 0; i <= temp; i++) {//name 
				name[i] = Email[i];
			}
			name[(temp + 1)] ='\0';
		}
		for (int i = 0; i < 100; i++) { // 문자열속 dat의 인덱스 찾기 
			if (Email[i] == '.') {
				dat[index++] = i;
				//break;
			}
		}
		dat[index+1] = -1;
		for (int i = 0; i < 10; i++) {
			if (dat[i] == -1) {
				dat_index = i;
				break;
			}
		}
		index = 0;
				for (int i = (temp+1); i < dat[0]; i++) {
					system[index++] = Email[i];
				}index = 0;
				for (int i = (dat[0] + 1); i < dat[1]; i++) {
					domain[index++] = Email[i];
				}index = 0;
				for (int i = (dat[1] + 1); i < dat[2]; i++) {
					organization[index++] = Email[i];
				}index = 0;
				for (int i = (dat[2] + 1); i < strlen(Email); i++) {
					country[index++] = Email[i];
				}
				printf("name : %s\n", name);
				printf("system : %s\n", system);
				printf("domain : %s\n", domain);
				printf("organization : %s\n", organization);
				printf("country : %s\n", country);
	}
		break;
	case 2:
	{
		index = 0;
		printf("name : ");
		scanf("%s", &name);
		printf("system : ");
		scanf("%s", &system);
		printf("domain : ");
		scanf("%s", &domain);
		printf("organization : ");
		scanf("%s", &organization);
		printf("country : ");
		scanf("%s", &country);
		for (int i = 0; i < strlen(name); i++) {
			Email[index++] = name[i];
		}
		Email[index++] = '@';
		for (int i = 0; i < strlen(system); i++) {
			Email[index++] = system[i];
		}
		Email[index++] = '.';
		for (int i = 0; i < strlen(domain); i++) {
			Email[index++] = domain[i];
		}
		Email[index++] = '.';
		for (int i = 0; i < strlen(organization); i++) {
			Email[index++] = organization[i];
		}
		Email[index++] = '.';
		for (int i = 0; i < strlen(country); i++) {
			Email[index++] = country[i];
		}
		printf("E-mail : %s\n", Email);

	}
		break;
	default:
		break;
	}
	return 0;
}*/