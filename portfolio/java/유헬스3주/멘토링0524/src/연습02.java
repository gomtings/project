class access{
	int count;
	void setcount(){
		count++;
	}
	void print(){
		System.out.println("방문자 수는:"+count);
	}
}
class access2{
	static int count;
	void setcount(){
		count++;
	}
	void print(){
		System.out.println("방문자 수는:"+count);
	}
}
public class 연습02 {
	public static void main(String[] args) {
access2 guest = new access2();
access2 guest1 = new access2();
access2 host = new access2();
 guest.setcount();
 guest1.setcount();
 
 host.print();
 System.out.println("방문자 수는:"+host.count);
	}

}
