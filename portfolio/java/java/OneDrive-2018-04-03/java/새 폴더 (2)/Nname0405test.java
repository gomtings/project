import java.util.*;
public class Nname0405test {
	   public static void main(String[] args) {
		      Scanner input = new Scanner(System.in);
		      int flag=0;
		      
		      System.out.println("�α� ���۴� ������ �ۼ� ����Դϴ�.");
		      System.out.println("���̴� 20�� �̻��̿����ϰ� ���ڸ� �����ڸ� ���������մϴ�.");
		      
		      System.out.println("�̸��� �Է��ϼ���:");
		      String name = input.nextLine();
		      
		      System.out.println("���̸� �Է��ϼ���:");
		      int age = input.nextInt();
		      if(age<20){
		         System.out.println("���̸԰� ������!");
		      }
		      else{
		         System.out.println("������ �Է��ϼ���:(���ڸ�0 ���ڸ�1)");
		         int male_female = input.nextInt();

		         if(male_female==0){
		            System.out.println("�������Դϱ�?(�����ڸ�0 �ƴϸ�1)");
		            int army=input.nextInt();
		            if(army!=0){
		               System.out.println("���� �ٳ������.");
		               flag=1;
		            }
		         }
		      }
		      if(flag==0){
		         System.out.println(name+"�� ������ �Ϸ�Ǿ����ϴ�.");
		      }
		      
		   }

		}