package ��ü;
import java.util.*;
class ins {
	public int like=0;
	public String talk;

	public void talk_like() {
		//int a=0;
		this.like++;//=++a;
	}

	public void talk_hate() {
		
		this.like--;
	}

	public void talk_upload( String str ) {
		this.talk=str;
	}

	public void print() {
		System.out.println(talk);
		System.out.println("���ƿ� ������:"+like);
	}
}

public class instagram {
	public static void main(String[] args){
		Scanner key = new Scanner(System.in);
		String str;
		ins myins = new ins();
		System.out.println("�޽��� �Է�");
		myins.talk_upload( str =key.next());
		myins.talk_like();
		myins.talk_like();
		myins.talk_hate();
		myins.print();
		
	}
}
