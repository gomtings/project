#include <iostream> 
using namespace std; 

#include "Circle.h"

int main() {
	Circle donut; 
	double area = donut.getArea(); 
	cout << "donut ������ ";
	cout << area << endl; 

	Circle pizza(30); 
	area = pizza.getArea(); 
	cout << "pizza ������ ";
	cout << area << endl; 
}