
public class LoopExam2 {
	public static void main(String[] args){
		int cnt=0;  //�� �࿡ ��µ� ���� ���
		for(int i=1; i<=100; i++){			if(i%5==0)
				continue;  //5�� ����̸� i���� �����ϴ� ������ �̵�
			else{
				++cnt;  //��µ� Ƚ�� ���
				System.out.print((cnt%5==0)?" "+ i+"\n" : i +"   "); //�� �࿡ 5���� ���
			}
		}
	}
}

