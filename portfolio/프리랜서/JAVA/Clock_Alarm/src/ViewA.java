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
		thread = null;	// ����������
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
			repaint(); // ȭ�鰻��
			Alarm();
		}
	}
	protected void paintComponent(Graphics g) {
		// TODO Auto-generated method stub
		super.paintComponent(g);
		drawSturecture(g); // ȭ�� Ŭ����
		currentDate = new Date();
		time = formatter.format(currentDate);
		g.drawString(time, 380, 320); // ���ڿ� ǥ��
		g.drawString("���� �ð� : ", 250, 320); // ���ڿ� ǥ��
	}
	private void drawSturecture(Graphics g) {
		// TODO Auto-generated method stub
		g.setFont(new Font("�������", Font.BOLD, 24)); // ��Ʈ
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
            		System.out.println("�˶� �Դϴ� !!!");
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
	JLabel  lv1;// ���� �� ��ü ����
	JLabel  lv2;// ���� �� ��ü ����
	JLabel  lv3;// �ð� �� ��ü ���� 
	public ViewA() {
		file_txt();
		file_Audio();
		setLayout(null);
		setBackground(Color.yellow);
		lv1 =new JLabel("��_��"); //��2 ����
		lv2 =new JLabel("��_��"); //��2 ����
		lv3 =new JLabel(time); //��3 ����
		  btn1 = new JButton("START");
		  btn2 = new JButton("STOP");
		 btn1.setSize(100,50);
		 btn1.setLocation(120,130);
		 btn2.setSize(100,50);
		 btn2.setLocation(250,130);
		  lv1.setSize(60,60);  //ũŰ ����
		  lv1.setLocation(220,170); //��ġ ����
		  lv2.setSize(60,60);  //ũŰ ����
		  lv2.setLocation(220,170); //��ġ ����
		  
		  this.add(lv1); // ���̾ƿ�����
		 // this.add(lv3); // ���̾ƿ�����
		  add(btn1); //�ְ� ���� ��ư�� ���� �����ָ� �ȴ�
		  add(btn2); //�ְ� ���� ��ư�� ���� �����ָ� �ȴ�
		  btn1.setVisible(true); //  
		  btn2.setVisible(true); // frame�� ȭ�鿡 ��Ÿ������ true�� ����
		  
	}
	
	public void actionPerformed(ActionEvent e) {

		  // TODO Auto-generated method stub  

		  if(e.getActionCommand().equals("START")){
			  Alarm_flag=true;
			 // System.out.println(Alarm_flag);
			  lv1.setVisible(true); //  �ں� ��� ���� ����
			  this.add(lv1); // ���̾ƿ�����  
			  lv2.setVisible(false); //  �ں� ��� ���� ����
			  this.add(lv2); // ���̾ƿ�����  
		  }else if(e.getActionCommand().equals("STOP")){
			  Alarm_flag=false;
			  Alarm=false;
			//  System.out.println(Alarm_flag);
			  lv1.setVisible(false); //  �ں� ��� ���� ����
			  this.add(lv1); // ���̾ƿ�����
			  lv2.setVisible(true); //  �ں� ��� ���� ����
			  this.add(lv2); // ���̾ƿ�����
		  }

		 }
	 void file_txt() {
	      	try{// txt ������ ���� �ɴϴ�. (���⼭  txt ������ �˶� ����Ʈ �Դϴ�. )
	            //���� ��ü ����
	            	File file = new File("C:/Users/tkddn/Desktop/time_list.txt");// ���� ��Ʈ�� ����
	            int index=0; 
	            //�Է� ��Ʈ�� ����
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
	            System.out.println("�˶� ����Ʈ �� �о����ϴ�."); //true
	        }catch (FileNotFoundException e) {
	            // TODO: handle exception
	        }catch(IOException e){
	            System.out.println(e);
	        }
	 }
	 void file_Audio() {
			   //System.out.println(file.exists()); //true
	         try {// Audio ������ �����ɴϴ�. 
	             File file_Audio = new File("C:/Users/tkddn/Desktop/test3.wav");
	             AudioInputStream stream = AudioSystem.getAudioInputStream(file_Audio);
	             clip = AudioSystem.getClip();
	             clip.open(stream);
	             System.out.println("������� �о����ϴ�."); //true
	         } catch(Exception e) {
	             e.printStackTrace();
	         } 
		 } 
}