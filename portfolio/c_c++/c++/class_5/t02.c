#include<stdio.h>
#include<stdlib.h>
/*
typedef struct {
	char model[20];  //�𵨸�
	char color[20];  //����
	int mileage; //���� �Ÿ�
}Car;
void main() {
	int size=0;
	Car *c;
	char che;
	printf("�Է��� ������ ������ �Է� >>");
	scanf_s("%d",&size);
	printf("\n");
	c = (Car*)malloc(sizeof(Car*)*size);
	printf("%d ���� ���� ���� �Է�\n\n",size);
	for (int i = 0; i < size; i++) {
		printf("�𵨸�, ����, �����Ÿ��� �Է��ϼ���.");
		scanf_s("%s",c[i].model,20);
		scanf_s("%s", c[i].color,10);
		scanf_s("%d", &c[i].mileage);
	}
	che = getchar();
	printf("\n======���� ���� ���=====\n");
	for (int i = 0; i < size; i++) {
		printf("%d : %s\t%s\t%d\n",(i+1),c[i].model,c[i].color,c[i].mileage);
	}
	che = getchar();
}*/