import java.util.*;
 class Menu {
private String menu; //�޴���
private int danga; //�ܰ�
private int cnt; //����
private int ga;//����
public Menu(String menu , int danga , int cnt){
	this.menu=menu;
	this.danga=danga;
	this.cnt=cnt;
	this.ga=danga*cnt;
}
public int  getter(){
	return ga;
}
public String toString(){
	return "�Ŵ�"+menu +" "+"�ܰ�"+danga+" "+"����"+cnt+" "+"����"+getter();
}
}
public class t01 {
public static void main(String[] args) {
	Scanner in=new Scanner(System.in);
	Menu obj; //Menu ��ü ����
//�޴� �׸� �ش��ϴ� ���ڿ��� �迭�� �ʱ�
	String[] menu={"�ܹ���", "������ġ", "ġ�ƽ", "��������"}; 
//�޴� �� �ܰ��� ������ �迭�� �ʱ�ȭ
int[] danga={2500, 1000, 1500, 2000}; 
	int choice; //������ �޴� ��ȣ
	int total=0; //��ü ���� ���� 
	
	while(true){
System.out.println("\n1. �ܹ���\t2. ������ġ\t3. ġ�ƽ\t4. ��������\t5. ����");
System.out.print("�ش� �޴��� �����ϼ��� : "); 
choice = in.nextInt(); 
if(choice == 5)
	 break;
System.out.print("������ �����ϼ��� : ");
  int z=in.nextInt();
  obj = new Menu( menu[choice] ,danga[choice] , z );
  total+=obj.getter();
  System.out.println(obj);
	}
	System.out.print("��ü ���� ����:"+total);

	}
}
