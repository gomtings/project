#include<iostream>
using namespace std;
class Oval {
	int width, height; // width, height ���� �ɹ�
public :
	Oval(int w, int h) { // �ʺ�� ���� ���� �Ű������� �޴� ������ 
		width = w;
		height = h;
	}
	Oval() { // �ʺ�� ���� �� 1�� �ʱ�ȭ �ϴ� �Ű����� ���� ������ 
		width = 1;
		height = 1;
	}
	~Oval() { // �Ҹ��� 
		cout <<"~Oval �Ҹ���"<< " �ʺ�" << width << endl;
		cout << "~Oval �Ҹ���" << "����" << height << endl;
	}
	int getwidth(); // width �Լ� ����
	int getheight(); // height �Լ� ����
	void set(int w, int h); // set �Լ� ����
	void show(); //show  �Լ� ����
};
int Oval::getwidth() { // width �Լ� ����
	return width;
}
int Oval::getheight() { // height �Լ� ����
	return height;
}
//Oval::~Oval() {
	//cout <<" �ʺ�" <<width  << endl;
	//cout << "����" << height << endl;
//}
void Oval::show() { //show �Լ� ����  
	cout << "width : " << width << " " << "height : " << height << endl;
}
void Oval::set(int w, int h) { // set �Լ� ���� 
	width = w;
	height = h;
}
int main() { 
	Oval a;  //Oval �� ��ü a ������ �Ű����� ���� ���� ȣ��Ǿ� 1,1 �� width�� height �ʱ�ȭ
	Oval b(10, 20); //Oval �� ��ü b 10, 20 �� width�� height �ʱ�ȭ
	a.set(11, 22); //a�� height�� width �� 11, 22 ���� ��
	a.show(); //���
	cout << b.getwidth() << "," << b.getheight() << endl; // 
	char c = getchar();
	return 0; // �Լ� ���� 
}