import java.util.*;
 class Account { 
 private String name;  //이름을 저장하기 위한 필드 name 선언, 전용멤버
 private int balance; //잔액을 저장하기 위한 필드 balance 선언 전용멤버
	
//생성자 : 매개변수로 받은 값을 필드(이름, 잔액)로 초기화 – 본인작성
 public Account(String name , int balance){
	this.name = name;
	this.balance = balance; 
 }

//필드에 대한 설정자 메소드 – 본인작성
 public void namebal(){
	 
 }

//필드에 대한 접근자 메소드 – 본인작성
public String name(){
	 return name;
 }
public int  balance(){
	 return  balance;
}
//매개변수로 받은 값만큼 잔액을 증가하는 메소드, 반환값 없음 	
void dePosit(int money){ 
	   balance += money;
	}

//매개변수로 받은 값만큼 잔액을 감소하는 메소드, 반환값 없음
	void withDraw(int money){ 
	balance += money;
	}
    
public String toString(){ //객체 내용(이름과 잔액)을 문자열로 반환
	return "이름 : " + name + "\t잔액 : " + balance;
	}

}


public class t04 {
	public static void main(String[] args) {
		Scanner key =new Scanner(System.in);
		Account obj; 
		//Account 클래스 객체 obj 선언
		System.out.print("이름,잔액 입력");
      obj =  new Account(key.next(), key.nextInt());
		//표준입력 장치로 입력 받은 값을 Account 객체 생성시, 생성자 매개변수로 전달 – 본인작성
        
			 System.out.println(obj); //객체 내용 출력
		       //dePosit() 메소드를 호출하여 잔액을 증가 – 본인작성
		//접근자 메소드를 사용하여 이름과 잔액을 출력하는 문장 – 본인작성

			}
		}
