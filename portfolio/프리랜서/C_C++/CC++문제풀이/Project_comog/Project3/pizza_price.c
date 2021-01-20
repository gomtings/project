#pragma warning(disable : 4996)

#include<stdio.h>
int main(void) {
	int pizza_size = 0, pizza_price = 0;
	int size=0,cm_price = 0;
	printf("피자 직경(cm)? : ");
	scanf("%d", &pizza_size);
	printf("피자 가격(원)? : ");
	scanf("%d", &pizza_price);
	size = 3.14 * pizza_size / 4;
	cm_price = pizza_price / size;
	printf("피자의 크기: %d\n", size);
	printf("10cm당 가격 :%d\n", cm_price);
	return 0;
}