#ifndef CIRCLE_H  //중복 include 문제 해결, 조건컴파일
#define CIRCLE_H
class Random {
public:
	Random();
	int next(int n, int m);
	int nextInRange(int n, int m);
};
#endif