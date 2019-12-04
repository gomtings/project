public class cccc {
	public static void main(String[] args){
	int a, b;
    for (a = 2; a <= 100; a++) { 
       int c = 0; 
       for (b = 2; b < a; b++) { 
          if (a % b == 0) 
          c++; 
       } 
       if (c == 0) 
       System.out.println(a); 
}
}
}
