import java.util.Scanner;
public class �ǽ����� {
	public static void main(String[]args){
		Scanner key = new Scanner(System.in);
		String name,name2;
		int sum=0,sum2=0;
		int x=0,y=0;
		 System.out.print("�л����� �Է��ϼ���");
		 int stu = key.nextInt();
		 int [][] arry= new int [stu][stu+1];//�л� ���� ����迭 
		 String[] str = new String[stu];  //�л� �̸� ���� 
		  int[] aa = new int[10];
		  String[] tt = {"�̸�","����","����","����","����","���"};
   for(int a=0;a<stu;a++){
	   System.out.print((a+1)+"��° �л��� �̸� �� �Է� �ϼ���.");
		 str[a] = key.next();
   }
		 for(int i=0;i<arry.length;i++){
			 for(int j=0;j<arry[i].length;j++){
				 System.out.print(str[i]+" ��° �л��� ���� �� �Է� �ϼ���.");
				 arry[i][j]=key.nextInt();
				 sum+=arry[i][j];
				 if(j==3){
		           aa[i]=sum;
				 }
				 else if(j==4){
				aa[i]=sum/stu; 
				 }
			 }
		 }
		 
		 for(int i=0;i<arry.length;i++){
			 for(int j=0;j<arry[i].length;j++){

			 }
		 }
		 
		 for(int i=0;i<tt.length;i++){
			 System.out.print(tt[i]+"\t"); 
		 }
		 System.out.println();
		 for(int i=0;i<arry.length;i++){
			 System.out.print(str[i]);
			 for(int j=0;j<arry[i].length;j++){
             System.out.print("\t"+arry[i][j]+"    "+aa[i]);
			 }
			 System.out.println();
		 }
	}
}
