#include<iostream>
#include<string>
using namespace std;
class person {
	int id;
	double weight;
	string name;
public:
	//1. �����ڸ� �ߺ� �ۼ��ϰ� ���α׷��� �ϼ� �϶�.
	/*
	person();
	person(int id, string name);
	person(int id, string name, double weight);
	*/
	// 2. ����Ʈ �Ű� ������ ���� �ϳ��� �����ڸ� �ۼ��ϰ� ���α׷��� �ϼ� �϶�.
	person(int id = 0, string name = "noname ", double weight = 0.0);
	void show() {
		cout << id << ' ' << weight << ' ' << name << endl;
	}
};
//1. �����ڸ� �ߺ� �ۼ��ϰ� ���α׷��� �ϼ� �϶�.
/*
person::person() {
	id = 0;
	weight = 0.0;
	name = "noname";
}
person::person(int id,string name) {
	this->id = id;
	weight = 0;
	this->name = name;
}
person::person(int id, string name,double weight) {
	this->id = id;
	this->weight = weight;
	this->name = name;
}
*/
// 2. ����Ʈ �Ű� ������ ���� �ϳ��� �����ڸ� �ۼ��ϰ� ���α׷��� �ϼ� �϶�.
person::person(int id, string name, double weight) {
	this->id = id;
	this->weight = weight;
	this->name = name;
}
/*
int main() {
	person grace, ashley(2, "Ashley"), helen(3, "helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
	char ch = getchar();
}*/