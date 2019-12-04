import java.util.Scanner;
public class No0405 {
	public static void main(String []args){
		Scanner zz=new Scanner(System.in);
		System.out.println("인규 컴퍼니 지원서 양식 입니다.");
		System.out.println("나이는 20살 이상이고 군필자만 지원 가능합니다. ");
		System.out.println("이름을 입력하세요.");
		String str=zz.nextLine();
		System.out.println("나이를 입력하세요.");
		int i=zz.nextInt();
		if(i>=20){
			System.out.println("성별을 입력하세요.");
			int i1=zz.nextInt();
			if(i1==0){
				System.out.println("군필입니까?");
				int i2=zz.nextInt();
				if(i2 == 0){
					System.out.println("지원이 완료됫습니다.");
				}
				System.out.println("지원이 완료됫습니다.");
			}
			
		}
	}

}
