#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;
/*
int main() {
	Shape *pStart = NULL;
	Shape *pLast;

	pStart = new Circle(); // ó���� �� ������ �����Ѵ�.
	pLast = pStart;

	pLast = pLast->add(new Rect()); // �簢�� ��ü ����
	pLast = pLast->add(new Circle()); // �� ��ü ����
	pLast = pLast->add(new Line()); // �� ��ü ����
	pLast = pLast->add(new Rect()); // �簢�� ��ü ����

	// ���� ����� ��� ������ ȭ�鿡 �׸���.
	Shape* p = pStart;
	while (p != NULL) {
		p->paint();
		p = p->getNext();
	}

	// ���� ����� ��� ������ �����Ѵ�.
	p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext(); // ���� ���� �ּ� ���
		delete p; // �⺻ Ŭ������ ���� �Ҹ��� ȣ��
		p = q; // ���� ���� �ּҸ� p�� ����
	}
	char ch = getchar();
}
*/