package ��ü;
class mov{
	String Mname;
	double point;
	String movs;
	int year;
	void write(){
		System.out.println("��ȭ �̸�:"+Mname);
		System.out.println("����:"+point);
		System.out.println("��ȭ ����:"+movs);
		System.out.println("��ǥ �⵵:"+year);
		
	}
	
}
public class Movie {
	public static void main(String [] args){
		mov mov =new mov();
		mov.Mname="���뿵ȭ";
		mov.point=9.9;
		mov.movs="�̻��";
		mov.year=2017;
		mov.write();
		
	}
}
