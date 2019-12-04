package ¸Þ¼Òµå2;

public class leesangwoo2 {
	public static String num(int a , int b){
		int i = a;
		String out = "";
		while(i<b){
			out+=i;
			i++;
		}
		return out;
		
	}
	public static void main(String [] args){
		String res = num(1,5);
		System.out.println(res);
		
	}

}
