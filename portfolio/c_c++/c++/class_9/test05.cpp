#include <iostream>
using namespace std;
class A{
	int s,x;
protected:
	void setX(int x){this->x=x;}
	void setS(int s){this->s=s;}

};
/*
class S :private A {
int y;
public:
	void setXY(int a,int b,int s){
	x=a;
	y=b;
	setS(s);
	}
};*/