
public class LoopExam1 {
	public static void main(String[] args){
		int count=10;
		int rnd;
		while(count >=1){  
			rnd=(int)(Math.random()*60) +1;  //1���� 60������ ���� ����
			System.out.println("������ ���� :(" + count +")" +  rnd);
			count--;
		}
	}
}