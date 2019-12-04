package 유헬스1102;
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
		System.out.print("\n 총 방문자 수="+Museum.getVisitor());
		System.out.print("\n 박물관 입장료 수입="+Museum.getAdmissionfee());
		System.out.print("\n 유모자 대여 수 ="+Museum.getBabycarriage());
	}

}
