#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void fileRead(vector<string> &v, ifstream &fin) { // fin ��Ʈ�����κ��� ���� v�� �о����
	string line;
	while(getline(fin, line)) { // fin ���Ͽ��� �� ���� �б�
		v.push_back(line); // ���� ������ ���Ϳ� ����
	}
}

void search(vector<string> &v, string word) { // ���� v���� word�� ã�� ���
	for(int i=0; i<v.size(); i++) {
		int index = v[i].find(word);
		if(index != -1) // found
			cout << v[i] << endl;
	}
}

int main() {
	vector<string> wordVector;
	ifstream fin("words.txt");
	if(!fin) {
		cout << "words.txt ������ �� �� �����ϴ�" << endl;
		return 0; // ���� ����
	}
	fileRead(wordVector, fin); // fin ��Ʈ�����κ��� wordVector�� ���� ���� �б�
	fin.close();

	cout << "words.txt ������ �о����ϴ�." << endl;
	while(true) {
		cout << "�˻��� �ܾ �Է��ϼ��� >>";
		string word;
		getline(cin, word); // Ű����κ��� ���ڿ� �б�
		if(word == "exit") 
			break; // ���α׷� ����
		search(wordVector, word); // ���ڿ��� words.txt���� �˻��Ͽ� ���
	}
	cout << "���α׷��� �����մϴ�." << endl;
}