#include <iostream>
using namespace std;

int main() {
	int score;

	cout << "������ �Է��ϼ���>>";
	cin >> score;

	if(score > 100 || score < 0) {
		cout << "�߸��� ���� �Դϴ�";
		return 0;
	}

	if(score >= 90) // 90�̻� 100����
		cout << "A �Դϴ�";
	else if(score >= 80) // 80�̻� 89����
		cout << "B �Դϴ�";
	else if(score >= 70) // 70�̻� 79����
		cout << "C �Դϴ�";
	else if(score >= 60) // 60�̻� 69����
		cout << "D �Դϴ�";
	else // 0�̻� 59����
		cout << "F �Դϴ�";
}