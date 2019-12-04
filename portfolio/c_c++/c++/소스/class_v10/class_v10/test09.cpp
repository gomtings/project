#include <iostream>
#include <vector> // vector 튜토리얼

using namespace std;

int main() {
	vector<int> v; // 템플릿 선언
	int n;
	double avg;

	while (1) {
		cout << "정수를 입력하세요(0을 입력하면 종료) >>";
		cin >> n;
		v.push_back(n);
		if (n == 0)
			break;

		int sum = 0;
		for (int i = 0; i < v.size(); i++) {
			cout << v.at(i) << " ";
			sum += v.at(i);
		}

		avg = (double)sum / v.size();
		cout << endl << "평균 = " << avg << endl;

		char ch;
		ch = getchar();
		ch = getchar();
	}
}
