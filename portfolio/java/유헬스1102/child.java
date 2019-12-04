package À¯Çï½º1102;

public class child extends Person {
private int age;
child(){
	this("anonymous",0);
}
child(String name,int age){
	super(name);
	this.age=age;
}
int getage(){
	return age;
}
public String toString(){
	return "child ["+getname()+","+age+"]";
}
}
