#include <iostream>
#include <string>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src)=0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString()=0; // �ҽ� ���� ��Ī
	virtual string getDestString()=0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
protected:
	virtual string getSourceString() { return "��"; }
	virtual string getDestString() { return "�޷�"; }
	virtual double convert(double src);
public:
	WonToDollar(double ratio) : Converter(ratio) { }
};

double WonToDollar::convert(double src) {
	return src/ratio;
}

int main() {
	WonToDollar wd(1010); // 1 �޷��� 1010��
	wd.run();
}