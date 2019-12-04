package fileinout;

public class student implements java.io.Serializable {
	
public String name = "lee sang woo";
public String num = "010-0000-0000";
public student(){
	this("","");
}
public student(String name,String num){
	this.name=name;
	this.num=num;
}

public  void setname(String name){
	 this.name = name;
 }
public  void setnum(String num){
	 this.num = num;
}
public String getname(){
	return name;
}
public String getnum(){
	return num;
}
public String toString() {
	return (name + "," + num);
}

}
