package study;
public class gugudan {
	public static void main (String[] args){
		int i=1;
		while(i>=19){
		int b=1;
		while(b>=19){
			int c= i * b;
			System.out.print(i+"*"+ b +"="+c);
			i++;
			System.out.println();
		}
		System.out.println();
		b++;
		}
	}
}
