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
	ROM biosROM(1024 * 10, x, 5);  //10KB�� ROM �޸�. �迭 x�� �ʱ�ȭ��
	RAM mainMemory(1024 * 1024);  //1MB�� RAM �޸�


	//0�������� 4�������� biosROM���� �о� mainMemory�� ����
	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
	char c = getchar();
}*/