package �ڹ�11����;

public class t02 {
	public static void main(String[] args){
		double[] dou ={1.0, 2.0, 3.0, 4.0} ; 
		double hap=0;
		double max=0;
		 System.out.print("��� �迭 ��� = ");
		 for(double i: dou){
			 System.out.print(i+" ");
		 }
		 for(int i=0;i<dou.length;i++){
			 hap+=dou[i];
			 if(dou[i]>max)
				 max=dou[i];
		 }
		 System.out.println();
		 System.out.print("�� = "+hap+"�ִ밪 = "+max);
	}
 }
