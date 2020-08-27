import java.util.Date;
import java.text.SimpleDateFormat;
import javax.swing.*;
import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;
public class ViewA extends JPanel  implements ActionListener,Runnable{
	boolean Alarm_flag = false;
	String[] time_table;
	Thread thread = null;
	SimpleDateFormat formatter = new SimpleDateFormat("HH:mm:ss");
	SimpleDateFormat Alarm_check = new SimpleDateFormat("HH:mm");
	Date currentDate;
	String time,time2;
	 JButton btn1;
	 JButton btn2;
	 boolean Alarm,play;
	 Clip clip = null;
	public void start() {
		if(thread == null)
		{
			thread = new Thread(this);	// this
			thread.start();
		}
	}
	public void stop() {
		thread = null;	// 쓰레드종료
	}
	public void run() {
		 btn1.addActionListener(this);
		 btn2.addActionListener(this);
		// TODO Auto-generated method stub
		while(thread != null) {
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			repaint(); // 화면갱신
			Alarm();
		}
	}
	protected void paintComponent(Graphics g) {
		// TODO Auto-generated method stub
		super.paintComponent(g);
		drawSturecture(g); // 화면 클리어
		currentDate = new Date();
		time = formatter.format(currentDate);
		g.drawString(time, 380, 320); // 문자열 표시
		g.drawString("현재 시간 : ", 250, 320); // 문자열 표시
	}
	private void drawSturecture(Graphics g) {
		// TODO Auto-generated method stub
		g.setFont(new Font("맑은고딕", Font.BOLD, 24)); // 폰트
		g.setColor(Color.black);
	}
    public void Alarm() {//
    	int time_index=-1;
    	boolean play = false;
    	currentDate = new Date();
    	time2 = Alarm_check.format(currentDate);
        boolean Alarm = false;
        play=false;
        //System.out.println(file.exists()); //true
            for(int i=0;i<time_table.length;i++) {
            	if((time_table[i].equalsIgnoreCase(time2))&&(Alarm_flag==true)){
            		time_index=i;
            		System.out.println("알람 입니다 !!!");
            		Alarm=true;
            		break;
            	}
            }
            if(Alarm==true) {
            	if(Alarm_flag==true) {
            			clip.start();
            			play=true;
            	}
            }else {
        		clip.stop();
        		if(play==true) {file_Audio();}
        	}
            if(clip.getFramePosition()==clip.getFrameLength()) {time_table[time_index]="";file_Audio();}
            //System.out.println(clip.getFramePosition());
    } 
	boolean lv_print = false;
	JLabel  lv1;// 시작 라벨 객체 선언
	JLabel  lv2;// 정지 라벨 객체 선언
	JLabel  lv3;// 시간 라벨 객체 선언 
	public ViewA() {
		file_txt();
		file_Audio();
		setLayout(null);
		setBackground(Color.yellow);
		lv1 =new JLabel("시_작"); //라벨2 생성
		lv2 =new JLabel("정_지"); //라벨2 생성
		lv3 =new JLabel(time); //라벨3 생성
		  btn1 = new JButton("START");
		  btn2 = new JButton("STOP");
		 btn1.setSize(100,50);
		 btn1.setLocation(120,130);
		 btn2.setSize(100,50);
		 btn2.setLocation(250,130);
		  lv1.setSize(60,60);  //크키 설정
		  lv1.setLocation(220,170); //위치 설정
		  lv2.setSize(60,60);  //크키 설정
		  lv2.setLocation(220,170); //위치 설정
		  
		  this.add(lv1); // 레이아웃지정
		 // this.add(lv3); // 레이아웃지정
		  add(btn1); //넣고 싶은 버튼을 만들어서 더해주면 된다
		  add(btn2); //넣고 싶은 버튼을 만들어서 더해주면 된다
		  btn1.setVisible(true); //  
		  btn2.setVisible(true); // frame이 화면에 나타나도록 true로 설정
		  
	}
	
	public void actionPerformed(ActionEvent e) {

		  // TODO Auto-generated method stub  

		  if(e.getActionCommand().equals("START")){
			  Alarm_flag=true;
			 // System.out.println(Alarm_flag);
			  lv1.setVisible(true); //  자벨 출력 여부 선택
			  this.add(lv1); // 레이아웃지정  
			  lv2.setVisible(false); //  자벨 출력 여부 선택
			  this.add(lv2); // 레이아웃지정  
		  }else if(e.getActionCommand().equals("STOP")){
			  Alarm_flag=false;
			  Alarm=false;
			//  System.out.println(Alarm_flag);
			  lv1.setVisible(false); //  자벨 출력 여부 선택
			  this.add(lv1); // 레이아웃지정
			  lv2.setVisible(true); //  자벨 출력 여부 선택
			  this.add(lv2); // 레이아웃지정
		  }

		 }
	 void file_txt() {
	      	try{// txt 파일을 가져 옵니다. (여기서  txt 파일은 알람 리스트 입니다. )
	            //파일 객체 생성
	            	File file = new File("C:/Users/tkddn/Desktop/time_list.txt");// 파일 스트림 생성
	            int index=0; 
	            //입력 스트림 생성
	            FileReader filereader = new FileReader(file);
	            BufferedReader bufReader = new BufferedReader(filereader);
	            int singleCh = 0;
	            char ch;
	        	String line = "";
	        	String table = "";
	            while((line = bufReader.readLine()) != null){
	            	table+=line;
	            	//System.out.println(table);
	            }
	           // System.out.println(table);
	            time_table = table.split(";");
	            for(int i=0;i<time_table.length;i++) {
	            	System.out.println(time_table[i]);
	            }
	            filereader.close();
	            System.out.println("알람 리스트 를 읽었습니다."); //true
	        }catch (FileNotFoundException e) {
	            // TODO: handle exception
	        }catch(IOException e){
	            System.out.println(e);
	        }
	 }
	 void file_Audio() {
			   //System.out.println(file.exists()); //true
	         try {// Audio 파일을 가져옵니다. 
	             File file_Audio = new File("C:/Users/tkddn/Desktop/test3.wav");
	             AudioInputStream stream = AudioSystem.getAudioInputStream(file_Audio);
	             clip = AudioSystem.getClip();
	             clip.open(stream);
	             System.out.println("오디오를 읽었습니다."); //true
	         } catch(Exception e) {
	             e.printStackTrace();
	         } 
		 } 
}