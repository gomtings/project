#include <iostream>
using namespace std;
class A{
public:
	A(){cout<<"������ A";}
	A(int a){cout<<"������ A"<<a;}
};
class B :public A{
public:
	B(){cout<<"������ B";}
	B(int a){cout<<"������ B"<<a;}
	B(int a,int b){cout<<"������ B"<<a<<b;}
};
int main(){
//B b;
//B b1(10);
B b2(10,20);
char c = getchar();

}
