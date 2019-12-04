package À¯Çï½º1102;

public class Person {
	private String name;
     String getname(){
    	 return name;
     }
     void setname(String name){
    	 this.name=name;
     }
	public Person() {
	this.name="anonymous";
	}
	public  Person(String name) {
		this.name = name;
	}
	public String toString(){
		return "person ["+name+"]";
	}
}
