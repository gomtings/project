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
		 ver="�Ϲ�ȸ��";
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
	System.out.println("�̸�:"+ name);
	System.out.println("��ȭ��ȣ:"+num);
	System.out.println("����:"+ age);
	System.out.println("����Ʈ:"+  point);
	System.out.println("��������:"+ iga);
	System.out.println("ȸ�� ����:"+ vg);
	
 }
}
public class t02 {
	public static void main(String[] args) {
		
		Membership obj  = new Membership("�̻��" , "000-0000-0000" ,24);
		Membership obj2  = new Membership("ȫ�浿" , "000-0000-0000" ,999);
		obj.memberType('v');
		obj2.memberType('g');
		obj.rateProc('v' , 2200);
		obj2.rateProc('g' , 1000);
		obj.disPlay();
		obj2.disPlay();
	}
}
