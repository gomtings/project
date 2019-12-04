#include<iostream>
bool isMultple(int a, int b);
int main(void) {
int a, b;
std::cout << "두 정수 입력 >> ";
std::cin >> a >> b;
if (isMultple(a, b))
std::cout << "Yes";
else
std::cout << "No";

char ch=getchar();
ch = getchar();
}

bool isMultple(int a, int b) {
if (a / b == 0)
return true;
else
return false;
}