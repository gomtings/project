#include<iostream>
using namespace std;

class BaseArray {
private:
	int capacity;  //�迭�� ũ��
	int *mem;  //���� �迭�� ����� ���� �޸��� ������
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyStack : public BaseArray {
	int count = 0;
public:
	MyStack(int size) :BaseArray(size) {
		count = 0;
	}
	void push(int n) {
		put(count, n);
		count++;
	}
	int capacity() {return getCapacity();}
	int length() {return count;}
	int pop() {
		count--;
		return get(count);
	}

};
/*
int main() {
	MyStack mStack(100);
	int n;
	cout << "���ÿ� ������ 5���� ������ �Է��϶� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mStack.push(n);
	}
	cout << "���ÿ뷮 : " << mStack.capacity() << ", ����ũ�� : " << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << " ";
	}
	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;

	char ch;
	ch = getchar();
	ch = getchar();
}

*/