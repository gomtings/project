#include<iostream>
#include<cstdlib>
#include<ctime>
#include "Random.h"
using namespace std;

Random::Random() { srand((unsigned)time(NULL)); }
	int Random::next(int n, int m) {  //Â¦¼ö
		int a = rand() % (m - n + 1) + n;
		if (a % 2 == 1) { return a - 1; }

		else return a;
		return (rand() / 2) * 2;
	}
	int Random:: nextInRange(int n, int m) {  //È¦¼ö
		int a = rand() % (m - n) + n + 1;
		if (a > m) { return a -= 2; }
		else if (a % 2 == 0) { return a - 1; }
		else return a;
	}