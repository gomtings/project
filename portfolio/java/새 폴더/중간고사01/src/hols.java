
public class hols {
	public static void main(String[] args){
		int s=0,h=0;//Ȧ��,¦�� �� ����
		for(int a=1;a<=100;a++){
			if(a%2==0){// a�� 2�� ���� �������� 0�̸� ¦�� �Ǻ� ���ǽ�
				s+=a;//¦���� ��
			}
			else{
				h+=a;//Ȧ���� ��
			}
		}
		System.out.print("¦��"+s+"Ȧ��"+h);
	}
}
