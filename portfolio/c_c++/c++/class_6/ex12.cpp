/*
#include<iostream>

using namespace std;

class Dept {
	int size; //scores 배열 크기
	int *scores;//동적 할당 받을 정수 배열의 정수

public: 
	Dept(int size) {// 생성자
		this->size = size;
		scores = new int[size];
	}
	Dept(Dept &dept); //복사 생성자 // 12.2
	~Dept(); // 소멸자
	int getSize() {
		return size;
	}
	void read(); // size만큼 키보드에서 정수를 읽어 scores 배열에 저장
	bool isOver60(int index); // index의 학생의 성적이 60보다 크면 return
};

void Dept::read() {
	cout << "10개 점수 입력 >> ";
	for (int i = 0; i < size; i++) { // size개수
		cin >> scores[i]; // 성적을 score배열에 입력
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true; // 성적이 60 이상이면 true 

	else
		return false; // 성적이 60 미만이면 false
}

Dept::Dept(Dept &dept) { // 복사 생성자 // 12.2
	this->size = dept.size; // size 복사
	scores = new int[size]; // score를 위한 동적 할당

	for (int i = 0; i < size; i++) { // size 만큼 배열 원소 복사
		this->scores[i] = dept.scores[i];
	}
}

int countPass(Dept dept) { // dept 학과 60점 이상으로 통과하는 학생의 수 리턴
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {// size 만큼 for문을 돌리고 60점 이상일때 count 를 1씩 증가 
		if (dept.isOver60(i))
			count++;
	}
	return count; 
}

Dept::~Dept() { // 소멸자 구현
	delete[] scores;
}

int main() {
	Dept com(10); // 총 10명이 있는 학과 com
	com.read(); // 총 10명의 학생들의 성적을 키보드로부터 읽어 scores 배열에 저장
	int n = countPass(com); // com 학과에 60점 이상으로 통과한 학생 수를 return
	cout << "60점 이상은 " << n << "명";

	char c = getchar();
	c = getchar();
}*/

//12-2
//이미 반환된 메모리를 다시 반환 하려 하기때문에 에러가 발생 한다.

#include<iostream>

using namespace std;

class Dept {
	int size; //scores 배열 크기
	int *scores;//동적 할당 받을 정수 배열의 정수

public:
	Dept(int size) {// 생성자
		this->size = size;
		scores = new int[size];
	}

	~Dept(); // 소멸자
	int getSize() {
		return size;
	}
	void read(); // size만큼 키보드에서 정수를 읽어 scores 배열에 저장
	bool isOver60(int index); // index의 학생의 성적이 60보다 크면 return
	int countPass();
};

void Dept::read() {
	cout << "10개 점수 입력 >> ";
	for (int i = 0; i < size; i++) { // size개수
		cin >> scores[i]; // 성적을 score배열에 입력
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60)
		return true; // 성적이 60 이상이면 true 

	else
		return false; // 성적이 60 미만이면 false
}

int Dept::countPass() { // dept 학과 60점 이상으로 통과하는 학생의 수 리턴_countPass(Dept dept)에서
	// 매개 변수 Dept dept 를 제거  
	int count = 0;
	for (int i = 0; i < getSize(); i++) {// size 만큼 for문을 돌리고 60점 이상일때 count 를 1씩 증가 
		if (isOver60(i))
			count++;
	}
	return count;
}

Dept::~Dept() { // 소멸자 구현
	delete[] scores;
}

int main() {
	Dept com(10); // 총 10명이 있는 학과 com
	com.read(); // 총 10명의 학생들의 성적을 키보드로부터 읽어 scores 배열에 저장
	int n = com.countPass(); // com 학과에 60점 이상으로 통과한 학생 수를 return _인수com을 제거 
	cout << "60점 이상은 " << n << "명";

	char c = getchar();
	c = getchar();
}