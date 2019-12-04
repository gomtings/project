class calc{
	double calc(double a, double b , char operator){
		if(operator == '+'){
			return a+b;
		}
		else if(operator  == '-'){
			return a-b;
		}
		else if(operator  == '*'){
			return a*b;
		}
		else if(operator  == '/'){
			return a/b;
		}
		return -0.1;
	}
	int calc(int a, int b , char operator){
		if(operator == '+'){
			return a+b;
		}
		else if(operator  == '-'){
			return a-b;
		}
		else if(operator  == '*'){
			return a*b;
		}
		else if(operator  == '/'){
			return a/b;
		}
		return -1;
	}
}
public class 연습04 {
	public static void main(String[] args) {
		calc my = new calc();
		System.out.println("연산결과"+my.calc(3.0,4.0,'+'));
		System.out.println("연산결과"+my.calc(5,4,'-'));
	}
}
