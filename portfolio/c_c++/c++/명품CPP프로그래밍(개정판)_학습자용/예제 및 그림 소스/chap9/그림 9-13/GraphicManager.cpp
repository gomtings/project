#include <iostream>
#include "GraphicManager.h"
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"

using namespace std;

void GraphicManager::run() {
	Shape *pStart=NULL; // ��ũ�� ����Ʈ�� ���
	Shape *pNext=NULL; // �������� �޸� ���� ��ü�� ���� ������
	Shape *newShape=NULL; // ���� ������ ���� ��ü�� ���� ������

	while(true) {
		int shape = readShape(); // ����ڷκ��� ���� ���� �Է�
		switch(shape) {
		case 0: // Circle
			newShape = new Circle();
			break;
		case 1: // Rect
			newShape = new Rect();
			break;
		}
		if(pStart == NULL) { // ó������ ������ �� ��
			pStart = newShape;
			pNext = pStart;
		}
		else {
			pNext->add(newShape);
		}


	}
}

int GraphicManager::readShape() {
	int shape;
	prompt();
	cin >> shape;
	return shape;
}

void GraphicManager::prompt() {
	cout << "�׸����� �ϴ� ����, ��(0), �簢��(1)";
}