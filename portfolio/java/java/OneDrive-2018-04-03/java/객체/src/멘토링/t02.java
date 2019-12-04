class Membership{
 private String name ,num;
 private int age;
 private int point;
 private double iga;
 private String vg;
  public String ver;
  double temp=0;
 public String memberType(char vg){
	 ver="";
	 if(vg=='v'){
		 ver="VIP";
	 }
	 else if(vg =='g'){
		 ver="일반회원";
	 }
	 return this.vg= ver;
 }
 
 public double rateProc(char vg , int point){
	 temp=0;
	 this.point=point;
	 switch(vg){
	 case 'v':
		 if(point >=1000){
			 temp=0.06;
		 }
		 else
			 temp=0.07;
		 break;
	 case 'g':
		 if(point >=2000){
			 temp=0.08;
		 }
		 else
			 temp=0.09;
		 break;
	 }
	 
	 return this.iga=temp ;
 }
 
 public Membership(String name , String num ,int age ){
	 this.name=name;
	 this.num=num;
	 this.age=age;
 }
 public void disPlay(){
	System.out.println("이름:"+ name);
	System.out.println("전화번호:"+num);
	System.out.println("나이:"+ age);
	System.out.println("포인트:"+  point);
	System.out.println("대출이율:"+ iga);
	System.out.println("회원 구분:"+ vg);
	
 }
}
public class t02 {
	public static void main(String[] args) {
		
		Membership obj  = new Membership("이상우" , "000-0000-0000" ,24);
		Membership obj2  = new Membership("홍길동" , "000-0000-0000" ,999);
		obj.memberType('v');
		obj2.memberType('g');
		obj.rateProc('v' , 2200);
		obj2.rateProc('g' , 1000);
		obj.disPlay();
		obj2.disPlay();
	}
}
