import java.util.Scanner;
public class gugudans {
	public static void main(String[] args) {
		
		int c;
		int count = 0, count2 = 0, x = 0;
		char s;
		Scanner v = new Scanner(System.in);
		while (true){
			
			System.out.print("구구단을 학습합니다.종료(n or N)계속(y or Y)");
			s=v.next().charAt(0);
			
			if (s == 'y' || s == 'Y') {
				
				for (int a = 1; a <=4; a++){
					
					int z = (int) (Math.random() * 8 + 1);
					int z2 = (int) (Math.random() * 8 + 1);
					int z3 = z * z2;
					System.out.print(z + "*" + z2 + "=");
					c = v.nextInt();
					if ((c == z3)) {

						System.out.println("정답입니다.");
						count++;// 정답개수 카운트 
					} else {
						System.out.println("오답입니다.");
						count2++; // 오답 개수 카운트 
					}
					if(a==4){
						System.out.print("구구단을 학습합니다.종료(n or N)계속(y or Y)");
					s=v.next().charAt(0);
					if(s == 'N' || s == 'n'){
						break;
					}
					a=0;
					}
			} //for문
			
				}//if 문 y or n판별
			break;
				}//while 문
		System.out.print("정답 개수는"+count);// 정답 개수 출력
				}
			}
		

