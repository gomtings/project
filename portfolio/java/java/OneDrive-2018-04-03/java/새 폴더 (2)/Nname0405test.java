import java.util.*;
public class Nname0405test {
	   public static void main(String[] args) {
		      Scanner input = new Scanner(System.in);
		      int flag=0;
		      
		      System.out.println("인규 컴퍼니 지원서 작성 양식입니다.");
		      System.out.println("나이는 20살 이상이여야하고 남자면 군필자만 지원가능합니다.");
		      
		      System.out.println("이름을 입력하세요:");
		      String name = input.nextLine();
		      
		      System.out.println("나이를 입력하세요:");
		      int age = input.nextInt();
		      if(age<20){
		         System.out.println("나이먹고 오세요!");
		      }
		      else{
		         System.out.println("성별을 입력하세요:(남자면0 여자면1)");
		         int male_female = input.nextInt();

		         if(male_female==0){
		            System.out.println("군필자입니까?(군필자면0 아니면1)");
		            int army=input.nextInt();
		            if(army!=0){
		               System.out.println("군대 다녀오세요.");
		               flag=1;
		            }
		         }
		      }
		      if(flag==0){
		         System.out.println(name+"님 지원이 완료되었습니다.");
		      }
		      
		   }

		}