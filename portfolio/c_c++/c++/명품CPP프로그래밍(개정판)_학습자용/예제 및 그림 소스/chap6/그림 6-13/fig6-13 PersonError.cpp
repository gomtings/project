class PersonError {
	int money;
public:
	static int getMoney() { return money; } // ������ ����.

	void setMoney(int money) {
		this->money = money; // ���� �ڵ�
	}
};

int main() {
	int n = PersonError::getMoney();

	PersonError errorKim;
	errorKim.setMoney(100);
}