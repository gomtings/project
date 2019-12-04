#ifndef CIRCLE_H  //중복 include 문제 해결, 조건컴파일
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