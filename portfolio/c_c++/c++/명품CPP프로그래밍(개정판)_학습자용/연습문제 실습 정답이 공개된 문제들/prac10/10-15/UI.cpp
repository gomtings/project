#include <iostream>
using namespace std;

#include "UI.h"

int UI::getMainMenu() {
	cout << "����:1, ����:2, ��κ���:3. ����:4 >> ";

	int menu;
	cin >> menu;

	return menu;
}

void UI::getCircle(int& radius, string& name) {
	cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
	cin >> radius >> name;
}

string UI::getCircleName() {
	cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";

	string name;
	cin >> name;

	return name;
}

void UI::println(string msg) {
	cout << msg << endl;
}

void UI::print(string msg) {
	cout << msg;
}

void UI::print(int msg) {
	cout << msg;
}