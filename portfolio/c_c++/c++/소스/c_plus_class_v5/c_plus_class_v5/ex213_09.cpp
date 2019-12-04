#include<iostream>
#include<string>
using namespace std;
class person {
	string name;
	string tel;
public:
	person();
	string getname() { return name; }
	string gettel() { return tel; }
	void set(string name, string tel);
};
person::person(){
	name = "Noname";
	tel = "Notel";
}
void person::set(string name,string tel){
	this->name = name;
	this->tel = tel;
}
int main() {
	string n, t;
	person p[3];
	for (int i = 0; i < 3; i++) {
		cout << (i + 1) <<"»ç¶÷>>";
		cin >> n >> t;
		set(n,t);
	}
}