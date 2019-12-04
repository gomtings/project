/*
#include<iostream>

using namespace std;

class Dept {
	int size; //scores �迭 ũ��
	int *scores;//���� �Ҵ� ���� ���� �迭�� ����

public: 
	Dept(int size) {// ������
		this->size = size;
		scores = new int[size];
	}
	Dept(Dept &dept); //���� ������ // 12.2
	~Dept(); // �Ҹ���
	int getSize() {
		return size;
	}
	void read(); // size��ŭ Ű���忡�� ������ �о� scores �迭�� ����
	bool isOver60(int index); // index�� �л��� ������ 60���� ũ�� return
};

void Dept::read() {
	cout << "10�� ���� �Է� >> ";
	for (int i = 0; i < size; i++) { // size����
		cin >> scores[i]; // ������ score�迭�� �Է�
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true; // ������ 60 �̻��̸� true 

	else
		return false; // ������ 60 �̸��̸� false
}

Dept::Dept(Dept &dept) { // ���� ������ // 12.2
	this->size = dept.size; // size ����
	scores = new int[size]; // score�� ���� ���� �Ҵ�

	for (int i = 0; i < size; i++) { // size ��ŭ �迭 ���� ����
		this->scores[i] = dept.scores[i];
	}
}

int countPass(Dept dept) { // dept �а� 60�� �̻����� ����ϴ� �л��� �� ����
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {// size ��ŭ for���� ������ 60�� �̻��϶� count �� 1�� ���� 
		if (dept.isOver60(i))
			count++;
	}
	return count; 
}

Dept::~Dept() { // �Ҹ��� ����
	delete[] scores;
}

int main() {
	Dept com(10); // �� 10���� �ִ� �а� com
	com.read(); // �� 10���� �л����� ������ Ű����κ��� �о� scores �迭�� ����
	int n = countPass(com); // com �а��� 60�� �̻����� ����� �л� ���� return
	cout << "60�� �̻��� " << n << "��";

	char c = getchar();
	c = getchar();
}*/

//12-2
//�̹� ��ȯ�� �޸𸮸� �ٽ� ��ȯ �Ϸ� �ϱ⶧���� ������ �߻� �Ѵ�.

#include<iostream>

using namespace std;

class Dept {
	int size; //scores �迭 ũ��
	int *scores;//���� �Ҵ� ���� ���� �迭�� ����

public:
	Dept(int size) {// ������
		this->size = size;
		scores = new int[size];
	}

	~Dept(); // �Ҹ���
	int getSize() {
		return size;
	}
	void read(); // size��ŭ Ű���忡�� ������ �о� scores �迭�� ����
	bool isOver60(int index); // index�� �л��� ������ 60���� ũ�� return
	int countPass();
};

void Dept::read() {
	cout << "10�� ���� �Է� >> ";
	for (int i = 0; i < size; i++) { // size����
		cin >> scores[i]; // ������ score�迭�� �Է�
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true; // ������ 60 �̻��̸� true 

	else
		return false; // ������ 60 �̸��̸� false
}

int Dept::countPass() { // dept �а� 60�� �̻����� ����ϴ� �л��� �� ����_countPass(Dept dept)����
	// �Ű� ���� Dept dept �� ����  
	int count = 0;
	for (int i = 0; i < getSize(); i++) {// size ��ŭ for���� ������ 60�� �̻��϶� count �� 1�� ���� 
		if (isOver60(i))
			count++;
	}
	return count;
}

Dept::~Dept() { // �Ҹ��� ����
	delete[] scores;
}

int main() {
	Dept com(10); // �� 10���� �ִ� �а� com
	com.read(); // �� 10���� �л����� ������ Ű����κ��� �о� scores �迭�� ����
	int n = com.countPass(); // com �а��� 60�� �̻����� ����� �л� ���� return _�μ�com�� ���� 
	cout << "60�� �̻��� " << n << "��";

	char c = getchar();
	c = getchar();
}