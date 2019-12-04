#include<iostream>
#include<string>
using namespace std;
// 1¹ø 
/*
int big(int x,int y) {
	int a= (x > y) ? x: y;
	return (a > 100) ? 100 : a;
}
int big(int x, int y ,int z) {
	int a = (x > y) ? x : y;
	return (a > z) ? z : a;
}
*/
// 2¹ø 

int big(int x, int y, int z=100) {
	int a = (x > y) ? x : y;
	return (a > z) ? z : a;
}
/*
int main() {
	int x = big(3, 5);
	int y = big(300,60);
	int z = big(30,60,50);
	cout << x << "   " << y << "    " << z << endl;
	char c = getchar();
}*/