 class pri{
	 static int cnt;

	 static getcnt(int n){//n은 형식 메개변수
		return cnt;
	 }
	 }
	pri1(int un){
		 System.out.println("public변수를 출력");
		 System.out.println("이름은:"+name);
		 System.out.println("나이는:"+un);
		 System.out.println("public변수를 출력");
		 System.out.println();
	 }
	 void print(int un , String n){
		 System.out.println("나이와 이름 모두 넘겨준 생성자");
		 System.out.println("이름은:"+n);
		 System.out.println("나이는:"+un);
		 System.out.println("public변수를 출력");
		 System.out.println();
	 }
 }
public class 연습03 {
	public static void main(String[] args) {
    pri my = new pri();
//my.num=24; private라 안된다.
  //my.name="김인규"; private라 안된다.
my.num1=23;
my.name1="수지=인규 여친";
my.setNum(24);
my.setName("김인규");
my.print();
my.print1();
	}
}