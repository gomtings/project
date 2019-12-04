import java.util.*;
class TelBook{
	private static String name;
	private static String tel;
	private static int num;
	public static int length;
 public TelBook(){
		//num++; 
	this.name="friend";
	this.tel="000-0000-0000";
	 }
 public TelBook(String name ,String tel){
	 num++;
	this.name=name;
	this.tel=tel;
	 }
 public static String teltoname(String name ,TelBook obj[]){
	 int x=0;
	for(int i=0;i<obj.length;i++){
	if(obj[i].equals(name)){
		x=i; 
	  //System.out.println("==>"+obj[x].tel);
	  break;
	}
	}
	return obj[x].tel;
 }
 public static String nametotel(String tel ,TelBook obj[]){
	  int x=0;
		for(int i=0;i<obj.length;i++){
		if(obj[i].equals(tel)){
	       x=i;
			//System.out.println("==>"+obj[x].name);
		  break;
		}
		}
		return obj[x].name;
	 }
 public static int getnum(){
	 return num;
	}
}
public class t04 {
	public static void main(String[] args) {
Scanner key = new Scanner(System.in);
TelBook[] obj = new TelBook[3];
	   for(int i=0; i<obj.length;i++){ 	   
System.out.println("이름과 전화번호를 입력하세요.");
		obj[i]=new TelBook( key.next() , key.next() );
	    }
	System.out.println("이름을 입력하시면 전화번호를 알려드립니다.");
	System.out.println("==>"+TelBook.teltoname(key.next(),obj));   
	  System.out.println("전화번호를 입력하시면 이름을 알려드립니다.");
	  System.out.println("==>"+TelBook.nametotel(key.next(),obj));    
	   System.out.println(TelBook.getnum());
	}
}
