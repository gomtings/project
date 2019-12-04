#include<iostream>
using namespace std;
class BaseMemory {
	char *mem;
	int size;
protected:
	BaseMemory(int size) { mem = new char[size]; this->size = size; }
	~BaseMemory() { delete[] mem; }
	void load(char *mem, int address, int size) {
		if (address + size > this->size) {
			return;
		}
		for (int i = 0; i < size; i++)
			this->mem[address + i] = mem[i];
	}
public:
	char read(int address) {
		return mem[address];
	}
};
class ROM : public BaseMemory {
public:
	ROM(int size, char* putchar, int putsize) : BaseMemory(size) {
		load(putchar, 0, putsize);
	}
};
class RAM : public BaseMemory {
public:
	RAM(int size) : BaseMemory(size) {}
	void write(int address, char data) {
		load(&data, address, 1);
	}
};/*
int main() {
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5);  //10KB의 ROM 메모리. 배열 x로 초기화됨
	RAM mainMemory(1024 * 1024);  //1MB의 RAM 메모리


	//0번지에서 4번지까지 biosROM에서 읽어 mainMemory에 복사
	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
	char c = getchar();
}*/