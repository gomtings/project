#include <iostream>
using namespace std;

int main() {
	double d[5];
	cout << "실수 5개 입력>>";
	for(int i=0; i<5; i++) 
		cin >> d[i];

	double sum=0.0;
	for(int i=0; i<5; i++) 
		sum += d[i];

	for(int i=0; i<5; i++) 
		cout <<  d[i] << " ";

	cout << "의 평균 = " << sum/5;
}