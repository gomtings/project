import java.util.*;
 class Menu {
private String menu; //메뉴명
private int danga; //단가
private int cnt; //갯수
private int ga;//가격
public Menu(String menu , int danga , int cnt){
	this.menu=menu;
	this.danga=danga;
	this.cnt=cnt;
	this.ga=danga*cnt;
}
public int  getter(){
	return ga;
}
public String toString(){
	return "매뉴"+menu +" "+"단가"+danga+" "+"개수"+cnt+" "+"가격"+getter();
}
}
public class t01 {
public static void main(String[] args) {
	Scanner in=new Scanner(System.in);
	Menu obj; //Menu 객체 선언
//메뉴 항목에 해당하는 문자열을 배열로 초기
	String[] menu={"햄버거", "샌드위치", "치즈스틱", "포테이토"}; 
//메뉴 별 단가를 정수형 배열로 초기화
int[] danga={2500, 1000, 1500, 2000}; 
	int choice; //선택한 메뉴 번호
	int total=0; //전체 구입 가격 
	
	while(true){
System.out.println("\n1. 햄버거\t2. 샌드위치\t3. 치즈스틱\t4. 포테이토\t5. 종료");
System.out.print("해당 메뉴를 선택하세요 : "); 
choice = in.nextInt(); 
if(choice == 5)
	 break;
System.out.print("개수를 선택하세요 : ");
  int z=in.nextInt();
  obj = new Menu( menu[choice] ,danga[choice] , z );
  total+=obj.getter();
  System.out.println(obj);
	}
	System.out.print("전체 구입 가격:"+total);

	}
}
