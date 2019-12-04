import java.util.Scanner;
public class 실습문제 {
	public static void main(String[]args){
		Scanner key = new Scanner(System.in);
		String name,name2;
		int sum=0,sum2=0;
		int x=0,y=0;
		 System.out.print("학생수를 입력하세요");
		 int stu = key.nextInt();
		 int [][] arry= new int [stu][stu+1];//학생 성적 저장배열 
		 String[] str = new String[stu];  //학생 이름 저장 
		  int[] aa = new int[10];
		  String[] tt = {"이름","국어","영어","수학","총합","평균"};
   for(int a=0;a<stu;a++){
	   System.out.print((a+1)+"번째 학생의 이름 을 입력 하세요.");
		 str[a] = key.next();
   }
		 for(int i=0;i<arry.length;i++){
			 for(int j=0;j<arry[i].length;j++){
				 System.out.print(str[i]+" 번째 학생의 성적 을 입력 하세요.");
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
