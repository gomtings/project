import java.util.Scanner;
class aaa {
	private String owner; // ������
	private int year; // ����
	private String type; // ����
	private int id;   //�Ϸù�ȣ

// ���� ����(Ŭ���� ����) - ��ü ���� ���� Ŭ������ ����, ������ ��ü ���� ���� ����
	private static int cnt = 0;

	public aaa(String owner, int year, String type) {
		this.owner = owner;
		this.year = year;
		this.type = type;
		id = ++cnt;
	}
	// �����޼ҵ� : ���������� ���������� ��밡��, ���� �޼ҵ常 ȣ���� �� �ִ�
	public static int getCnt() { // �������� cnt �� ��ȯ
		return cnt;
	}

	public String toString() { // ��ü ������ ���ڿ��� ��ȯ
		return "Car[owner=" + owner + ", year=" + year + ", type=" + type + ", id= " + id +"]";
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		// �ʵ� �ʱ�ȭ�� �ʿ��� ���� ������ ȣ�� �� ������ �Ű������� ����
		// �����ڴ� ��ü ���� �� �� �ѹ� ȣ��
		aaa carObj1 = new aaa("���μ�", 2014, "����"); // ��ü ���� & ���� & �ʱ�ȭ
		aaa carObj2; // ��ü ����
		System.out.print("������, ���, ������ ������� �Է��ϼ���");
		// ǥ���Է���ġ�� �Է��� ���� ������ �Ű������� �����Ͽ� �ʵ� �ʱ�ȭ
		carObj2 = new aaa(in.next(), in.nextInt(), in.next());
		System.out.println("��ü 1: " + carObj1);
		System.out.println("��ü 2: " + carObj2);

		// ���� �޼ҵ�� Ŭ���� �̸����� ȣ��
		System.out.println("���� �� ��ü ��: " + aaa.getCnt());
		}
}