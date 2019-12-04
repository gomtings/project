#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string text;
	int histo[26]; // 26���� ���ĺ��� ���� �� ���ڴ� ���� ����
public:
	Histogram();
	Histogram(string text); // �����ڿ� ������׷����� �м��� ���ڿ� ����
	void putc(char c); // ������׷��� ���� ����
	void put(string text); // ������׷��� string ���ڿ� ����
	void print(); // ������׷��� ȭ�� ���
	~Histogram() {}
};

Histogram::Histogram() {
	this->text = "";
}

Histogram::Histogram(string text) {
	this->text = text;
}

void Histogram::put(string text) {
	this->text.append(text); // ������ �ؽ�Ʈ�� text ���ڿ� ������
	//this->text += text; //�� ����
}

void Histogram::putc(char c) {
	char buf[] = {c, '\0'};
	this->text.append(buf); // ������ �ؽ�Ʈ�� text ���ڿ� ������

	// text += c; //�� ����
}

void Histogram::print() {
	for(int i=0; i<26; i++)
		histo[i] = 0; // histo �迭�� 0���� �ʱ�ȭ

	cout << text << endl << endl;

	for(int i=0; i<text.length(); i++) {
		if(isalpha(text[i])) { // ���ĺ��� ���ؼ��� ó��
			char c = tolower(text[i]);
			histo[c - 'a']++;
		}
	}
		
	int n =0;
	for(int i=0; i<26; i++) n += histo[i]; // ��ü ���ĺ� �� ���ϱ�
	cout << "�� ���ĺ� �� " << n << endl;
	cout << endl;

	for(int i=0; i<26; i++) {
		cout << char('a'+i) << " (" << histo[i] << ")" << '\t' << ": ";
		for(int j=0; j<histo[i]; j++)
			cout << '*';
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, \n");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}