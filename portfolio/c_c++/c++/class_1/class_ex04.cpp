#include<iostream>

bool  IsPositive(int num) {
	if (num < 0)
		return false;
	else
		return true;
}
/*
int main(void) {
	bool ispos;
	int num;
	int  a[]{ 2,3,4,5 };
	std::cout <<"Input number";
	std::cin >> num;
	for (int i : a)
		std::cout << i;
	ispos = IsPositive(num);
	if (ispos)
		std::cout << "Positive number" << std::endl;
	else
		std::cout << "Negative number" << std::endl;

	char ch=getchar();
	ch = getchar();
}*/