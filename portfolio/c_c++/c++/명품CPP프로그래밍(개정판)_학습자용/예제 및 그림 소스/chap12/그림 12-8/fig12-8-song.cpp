#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream fout; // ���� ��� ��Ʈ�� ��ü ����
	fout.open("song.txt"); // song.txt ���� ����
	if(!fout) { // ���Ⱑ ������ ���
		cout << "song.txt ������ �� �� ����.";
		return 0;
	}
	int age = 21;
	char singer[] = "Kim";
	char song[] = "Yesterday";

	fout << age << '\n'; // ���Ͽ� age�� '\n'�� ����Ѵ�.
	fout << singer << endl; // ���Ͽ� singer�� ���ڿ��� '\n'�� ���ٿ� ����Ѵ�.
	fout << song << endl; // ���Ͽ� song ���ڿ��� '\n'�� ���ٿ� ����Ѵ�.
	fout.close();
}