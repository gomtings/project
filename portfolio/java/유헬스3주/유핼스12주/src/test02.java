class Account { 
	 String name;                   //이름을 저장하기 위한 필드 name 선언
	 int   balance;             //잔액을 저장하기 위한 필드 balance 선언(4byte 정수형)
	
//형식 매개변수로 받은 값만큼 잔액을 증가하는 메소드, 반환값 없음	- 본인작성
void dePosit(int money){ 
	balance+=money;
}

//형식 매개변수로 받은 값만큼 잔액을 감소하는 메소드, 반환값 없음 – 본인작성
void withDraw(int money){ 
	balance-=money;
}
public int getBalance(){ //필드 balance 값을 반환하는 메소드
return balance;
}

public String toString(){ //객체 내용(이름과 잔액)을 문자열로 반환
	return "이름 : " + name + "\t잔액 : " + balance;
	}
}
public class test02 {
public static void main(String[] args) {
		Account obj = new Account();  //Account 클래스 객체 obj 선언 & 생성 – 본인작성
obj.name = "길동이"; // 이름 필드 초기화
obj.balance=20000; //잔액 필드를 20000으로 초기화 – 본인작성
obj.dePosit(10000); //dePosit()메소드 호출, 10000을 매개변수로 전달- 본인작성
                                  
System.out.println("입금 후 잔액 : " + obj.getBalance());
obj.withDraw(5000); //withDraw() 메소드 호출, 5000을 매개변수로 전달- 본인작성
                                            
System.out.println("출금 후 잔액 : " + obj.getBalance());
System.out.println(obj); //객체 내용 출력
}
}