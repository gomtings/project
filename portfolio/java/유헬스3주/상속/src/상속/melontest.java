package 상속;
public class melontest {
	public static void main(String[] args){
		melon[] m = new melon[2];
		m[0]=new melon(10,10000,2,"거지농원");
		m[1]=new melon(999,29999,2,"부자농원");
		System.out.println(m[0]);
		System.out.println(m[1]);
	}
}
