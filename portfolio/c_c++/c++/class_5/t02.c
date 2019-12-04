#include<stdio.h>
#include<stdlib.h>
/*
typedef struct {
	char model[20];  //모델명
	char color[20];  //색상
	int mileage; //누적 거리
}Car;
void main() {
	int size=0;
	Car *c;
	char che;
	printf("입력할 차량의 개수를 입력 >>");
	scanf_s("%d",&size);
	printf("\n");
	c = (Car*)malloc(sizeof(Car*)*size);
	printf("%d 개의 차량 정보 입력\n\n",size);
	for (int i = 0; i < size; i++) {
		printf("모델명, 색상, 누적거리를 입력하세요.");
		scanf_s("%s",c[i].model,20);
		scanf_s("%s", c[i].color,10);
		scanf_s("%d", &c[i].mileage);
	}
	che = getchar();
	printf("\n======차량 정보 출력=====\n");
	for (int i = 0; i < size; i++) {
		printf("%d : %s\t%s\t%d\n",(i+1),c[i].model,c[i].color,c[i].mileage);
	}
	che = getchar();
}*/