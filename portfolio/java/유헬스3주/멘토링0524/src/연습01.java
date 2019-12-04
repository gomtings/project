 class pri{
	 private int num;
	 private String name;
	 private int num1;
	 private String name1;
	 void setNum(int n){//n은 형식 메개변수
		 this.num1=n;
	 }
	 int getNum(){
		 return this.num1;
	 }
	 void setName(String n){//n은 형식 메개변수
		 this.name=n;
	 }
	 String getName(){
		 return this.name1;
	 }
	 void print1(){
		 System.out.println("public변수를 출력");
		 System.out.println("이름은:"+this.name1);
		 System.out.println("나이는:"+this.num1);
		 System.out.println("public변수를 출력");
		 System.out.println();
	 }
	 void print(){
		 System.out.println("public변수를 출력");
		 System.out.println("이름은:"+this.name);
		 System.out.println("나이는:"+this.num);
		 System.out.println("public변수를 출력");
		 System.out.println();
	 }
 }
public class 연습01 {
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
