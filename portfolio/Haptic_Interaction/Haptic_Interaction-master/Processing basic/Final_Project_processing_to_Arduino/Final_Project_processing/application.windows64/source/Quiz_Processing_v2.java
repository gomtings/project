import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import processing.serial.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class Quiz_Processing_v2 extends PApplet {


Serial myPort; 
String portName,keyDisp,keybord;
float val1,val2,val3,val0,val4;
float rawPos,xh,duty;
float[] keep_val1;
float[] keep_val2;
float[] keep_val3;
public void setup() {
  
  // List all the available serial ports
  printArray(Serial.list());
  // Open the port you are using at the rate you want:
  //myPort = new Serial(this, Serial.list()[0], 9600);
  
  int portnum=Serial.list().length - 1;
  myPort = new Serial(this, Serial.list()[portnum], 38400);
  portName = Serial.list()[portnum];
  
  
  keep_val1 = new float[width];
  keep_val2 = new float[width];
  keep_val3 = new float[width];
   val1 = 0;
   keyDisp = "0";
   keybord=  "0";
   keyDisp = String.format("%c", key);
   myPort.write(keybord);
}


public void draw() {
  background(255);  
  fill(0);   
  int lf = 10;    // Linefeed in ASCII
  String buf,buf2;
    while (myPort.available() > 0) 
  {
   if (myPort.read() == 'a') { // rawPos value 
      val0=((myPort.read())+(myPort.read()<<8)); 
    }
    if (myPort.read() == 'b') { // xh value 
      val2=PApplet.parseFloat(((myPort.read())+(myPort.read()<<8)));
      val2=val2/100;
    }
    if (myPort.read() == 'c') { // duty value
      val3=PApplet.parseFloat(((myPort.read())+(myPort.read()<<8)));
      val3=val3/100;
  }
    if (myPort.read() == 'd') { // k_wall value
      val4=((myPort.read())+(myPort.read()<<8));  
  }
   // ShiftWithNewf(keep_val3, result[2]);
  myPort.read();
  }
  
  buf = String.format("%s", portName); 
  text(buf, 20,30);
  buf = String.format("%06d, %.0f", frameCount, val1);
  text(buf, 20,50);
  // Arduino date output
  text("Arduino data", 20,80);
  text("-------------------", 20,90);
   fill(255, 0, 0);
  text("rawPos : ", 20,100);
  text(val0, 60,100);// rawPos value output
  fill(0,255, 0);
  text("xh", 20,120);
  text(val2, 60,120);// xh value output
  fill(0,0,255);
  text("duty", 20,140);
  text(val3, 60,140);// duty value output 
  fill(0,0,0);
  text("k_wall", 20,160); 
  text(val4, 60,160);// k_wall value output 
  text("key input ", 20,180);
  text(keybord, 70,180); // Keyboard values entered
  
  // Draw graph
 
  for (int i=0; i<width-1; i++) //rawPos graph
    keep_val1[i] = keep_val1[i+1];
    keep_val1[width-1] = val0;
    stroke(255, 0, 0); //color of graph : Red
    for (int x=1; x<width; x++) {
      line(width-x , height-1-getY(keep_val1[x-1]) , width-1-x , height-1-getY(keep_val1[x]) );
    }
    
  for (int i=0; i<width-1; i++) //xh graph
    keep_val2[i] = keep_val2[i+1];
    keep_val2[width-1] = (50+(val2*1000)); // *1000 Amplification
    stroke(0, 255, 0);
    for (int x=1; x<width; x++) {//color of graph : Green
      line(width-x , height-1-getY(keep_val2[x-1]) , width-1-x , height-1-getY(keep_val2[x]) );
    }
    
  for (int i=0; i<width-1; i++) //duty graph
    keep_val3[i] = keep_val3[i+1];
    keep_val3[width-1] = (100+(val3*1000));// *1000 Amplification
    stroke(0, 0, 255);
    for (int x=1; x<width; x++) {//color of graph : Blue
      line(width-x , height-1-getY(keep_val3[x-1]) , width-1-x , height-1-getY(keep_val3[x]) );
    }
}



public float GetMean(float[] arr)
{
  int sz = arr.length;
  int i;
  float sum =0;
  for(i=0; i< sz; i++)
  {
    sum = sum + arr[i];
  }
  
  float mean = sum / PApplet.parseFloat(i);
  return mean*10;
}

public void ShiftWithNewf(float[] arr, float n_val)
{
  int sz = arr.length;
  int i;
  for(i=0; i< sz-1; i++)
  {
    arr[sz-1-i] = arr[sz-2-i];
    
  }

  arr[0] = n_val;

}
public float getY(float val) {
  return (float)(val / 1023.0f * height) - 1;
}
public void keyPressed(){
  
  if(key==ENTER){//When you press Enter
    myPort.write(keybord);
    keybord="";//Initialize String
    return;
  }else if(key>=0||key<=9){//Conditions for receiving numbers only
   keyDisp = String.format("%c",key);
   keybord+=key;//Cumulate key values.
  }
}
  public void settings() {  size(640, 480); }
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "Quiz_Processing_v2" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
