import java.util.Scanner;
public class no040607 {
	public static void main(String[] args) {
		Scanner zz = new Scanner(System.in);
		String[] str = { "kim", "lee", "choi", "oh", "um" };
		int[] sr = new int[5];
		for (int f = 0; f < 5; f++) {
			sr[f] = (int) (Math.random() * 50000) + 1;
		}
		int z;
		while (true) {
			System.out.print("ID�� �Է��ϼ���:(quit�Է½� ����)");
			String str2 = zz.next();
			for (z = 0; z < str.length; z++) {
				String dd = str[z];

				if (str2.equals(str[z])) {
					System.out.println(str2 + "���� �ϱ���" + sr[z] + "�� �Դϴ�.");
					break;
				}
			}
			if (z == str.length)
				System.out.println("�Է��Ͻ� ID�� �����ϴ�.");
			if (str2.equals("quit")) {
				break;
			}
			
		}
	}
}
