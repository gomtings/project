package t06;

class A {
    final public int myMethod(int a, int b) { return 0; } 
} 
class B extends A { 
    public int myMethod(int a, int b) { return 1; } 
} 
public class Test {
    public static void main(String args[]) { 
        B b = new B(); 
        System.out.println("x = " + b.myMethod(0, 1));  
    } 
}
