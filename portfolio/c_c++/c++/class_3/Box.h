#ifndef CIRCLE_H  //�ߺ� include ���� �ذ�, ����������
#define CIRCLE_H
#include<iostream>
using namespace std;
class Box {
	int width, height;
	char fill;
public :
	Box(int w, int h);
	void setfill(char f);
	void setsize(int w, int h);
	void draw();
};
#endif