#pragma warning(disable : 4996)

#include<stdio.h>
int main(void) {
	int pizza_size = 0, pizza_price = 0;
	int size=0,cm_price = 0;
	printf("���� ����(cm)? : ");
	scanf("%d", &pizza_size);
	printf("���� ����(��)? : ");
	scanf("%d", &pizza_price);
	size = 3.14 * pizza_size / 4;
	cm_price = pizza_price / size;
	printf("������ ũ��: %d\n", size);
	printf("10cm�� ���� :%d\n", cm_price);
	return 0;
}