package 객체;
class mov{
	String Mname;
	double point;
	String movs;
	int year;
	void write(){
		System.out.println("영화 이름:"+Mname);
		System.out.println("평점:"+point);
		System.out.println("영화 감독:"+movs);
		System.out.println("발표 년도:"+year);
		
	}
	
}
public class Movie {
	public static void main(String [] args){
		mov mov =new mov();
		mov.Mname="노잼영화";
		mov.point=9.9;
		mov.movs="이상우";
		mov.year=2017;
		mov.write();
		
	}
}
