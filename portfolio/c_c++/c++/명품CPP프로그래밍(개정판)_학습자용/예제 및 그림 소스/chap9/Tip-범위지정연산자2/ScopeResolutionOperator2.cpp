#include <iostream>
using namespace std;

void sendMessage(const char* msg) { cout << msg << endl; }

class Window {
public:
	void sendMessage(const char* msg) { cout << "window msg : " << msg << endl; }
	void run() {
		::sendMessage("Glocal Hello"); // ���� �Լ� ȣ��
		sendMessage("Local Hello"); // ��� �Լ� ȣ��
	}
};

int main() {
	Window window;
	window.run();
}
