class Television {
private String model;
void setModel(String b) { // 설정자 
model = b;
}
 String getModel() {		// 접근자
return model;
}
}
public class t03 {
	public static void main(String[] args){
		Television t = new Television();
		t.setModel("STV-101");
		String b = t.getModel();
		System.out.print(b);
		}
		}
