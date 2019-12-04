package 멘토링0524연습;
class Membership{
 private String name ,num;
 private int age;
 private double iga;
 private String vg;
 
 public String memberType(char vg){
	 String ver;
	 if(vg=='v'){
		 ver="VIP";
	 }
	 else{
		 ver="일반회원";
	 }
	 return ver;
 }
 
 public double rateProc(char vg , int point){
	 double temp=0;
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
	 
	 return temp ;
 }
 
 public Membership(){
	 this.name=name;
	 this.num=num;
	 this.age=age;
	 this.iga=rateProc();
	 this.vg= memberType();
 }
 
 
}

public class t02 {
	public static void main(String[] args) {
		
	}
}
