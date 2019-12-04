#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Words {
	ifstream fin;
	vector<string> wordVector;
	bool exist(string word);
	void search(string word);
public:
	Words();
	void gamerun();
	~Words();
};

Words::Words() {
	fin.open("words.txt");
	if(!fin) {
		cout << "words.txt" << " ���� ����" << endl;
		exit(0); // ���α׷� ����
	}

	// words.txt ������ �о� wordVector�� ����
	string word;
	while(getline(fin, word)) { // �� ������ �о� word�� ����
		wordVector.push_back(word); // ���� �ܾ ���Ϳ� ����
	}
	cout << "... words.txt ���� �ε� �Ϸ�" << endl;
}

bool Words::exist(string word) { // word�� ���Ϳ� �ִ� �ܾ����� Ȯ��. ������ true ����
	for(int i=0; i<wordVector.size(); i++) { // ���� ��ü�� ������� ����
		if(word == wordVector[i]) // word�� ���Ϳ� ������ true ����
			return true;
	}
	return false;
}

void Words::search(string word) { // ���Ϳ� word�� �� ���ڸ� �ٸ� ��� �ܾ ã�� ���
	int length = word.length();
	for(int i=0; i<wordVector.size(); i++) { // ���� ��ü�� ������� ����
		if(wordVector[i].size() == length) { // word�� ���̰� ���� �ܾ ������� ��
			if(word == wordVector[i])
				continue; // ���� �ܾ�� �񱳿��� ����

			for(int j=0; j<length; j++) { // word�� �� ���ڿ� ����
				string originalTmp = word;
				string secondaryTmp = wordVector[i];
				originalTmp[j] = secondaryTmp[j] = '*'; // ������ �ܾ�� word�� �ܾ�� i��° ���ڸ� '*'�� ����
				if(originalTmp == secondaryTmp) { // ���� �� �ܾ ���ٸ�
					cout << wordVector[i] << endl;  // �� �ܾ�� j ��° ���ڸ� �ٸ�
				}
			}
		}
	}
}

Words::~Words() {
	fin.close();
}

void Words::gamerun() {
	cout << "�˻��� �����մϴ�. �ܾ �Է��� �ּ���." << endl;
	while(true) {
		cout << "�ܾ�>> ";
		string word;
		getline(cin, word); // ����ڷκ��� �� ������ �д´�.
		if(word == "exit")
			return; // ���� ����
		if(!exist(word)) // ����ڰ� �Է��� �ܾ ���Ϳ� �ִ��� Ȯ��
			cout << word << "�ܾ� ����. �ٽ� �Է��ϼ���" << endl;
		search(word); // ���Ϳ��� word�� �� ���ڸ� �ٸ� �ܾ ã�� ��� ���
	}
}

int main() {
	Words w;
	w.gamerun();
}