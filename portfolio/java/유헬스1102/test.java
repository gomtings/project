package ���ｺ1102;
public class test {
	public static void main(String[] args){
		Museum mus = new  Museum();
		
		Person[] p ={
				new Person(),
				new Person("danny"),
				new child(),
				new child("benny",3),
				new child("jhon",7),
		};
		for(Person ps : p){
			System.out.println(ps);
			mus.admission(ps);
		}
		System.out.print("\n �� �湮�� ��="+Museum.getVisitor());
		System.out.print("\n �ڹ��� ����� ����="+Museum.getAdmissionfee());
		System.out.print("\n ������ �뿩 �� ="+Museum.getBabycarriage());
	}

}
