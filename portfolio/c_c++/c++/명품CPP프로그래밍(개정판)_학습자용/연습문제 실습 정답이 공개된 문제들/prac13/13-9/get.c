#define _CRT_SECURE_NO_WARNINGS //���־� ��Ʃ������� scanf�� ���� ������ ���� ���� ����

#include <stdio.h>
int get() {
	int c;
	printf("���ڸ� �Է��ϼ���>>");
	scanf("%d", &c);
	return c;
}