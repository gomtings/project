#include <iostream>
#include <vector> // vector Ʃ�丮��

using namespace std;

int main() {
	vector<int> v; // ���ø� ����
	int n;
	double avg;

	while (1) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����) >>";
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
		cout << endl << "��� = " << avg << endl;

		char ch;
		ch = getchar();
		ch = getchar();
	}
}
