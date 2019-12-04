import java.util.*;
public class No04055 {
	public static void main(String[] args){
		Scanner zz =new Scanner(System.in);
		for(int a=1; a<=5; a++){
			System.out.print(a);
		}
		while(true){
			System.out.print("0을 입력하면 종료됩니다.");
			int z =zz.nextInt();
			if(z == 0){
				System.out.print("종료합니다.");
				break;
			}
		}
	}

}
