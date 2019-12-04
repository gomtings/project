#include <iostream>
#include <vector>
#include <algorithm> // for_each() �˰��� �Լ��� ����ϱ� ����
using namespace std;

int main() {
	vector<int> v = { 1, 2, 3, 4, 5 };

	// for_each()�� ���� v�� ù��° ���Һ��� ������ �˻��ϸ鼭,
	// �� ���ҿ� ���� 3��° �Ű������� ���ٽ� ȣ��. �Ű����� n�� �� ���� �� ����
	for_each(v.begin(), v.end(), [](int n) { cout << n << " "; });
}