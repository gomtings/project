#include <iostream>
using namespace std;
class A{
public:
	A(){cout<<"持失切 A";}
	A(int a){cout<<"持失切 A"<<a;}
};
class B :public A{
public:
	B(){cout<<"持失切 B";}
	B(int a){cout<<"持失切 B"<<a;}
	B(int a,int b){cout<<"持失切 B"<<a<<b;}
};
int main(){
//B b;
//B b1(10);
B b2(10,20);
char c = getchar();

}
