import java.awt.*;

import javax.swing.DefaultListModel;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Date;
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
public class ViewB extends JPanel implements ActionListener,Runnable{
	int[] A_price = {0,0,0,0,0,0,0,0};
	int[] B_price = {0,0,0,0,0,0,0,0};
	int[] C_price = {0,0,0,0,0,0,0,0};
	int[] D_price = {0,0,0,0,0,0,0,0};
	int[] E_price = {0,0,0,0,0,0,0,0};
	String out_set="";
	char group;
	DefaultListModel listModel = new DefaultListModel(); 
	int  Diamond=10000,sapphire=1000,emerald=100,ruby=10,Garnet=5,aquamarine=1;
	Thread thread2 = null;
	 JButton bt1;
	 JButton bt2;
	 JButton bt3;
	 JButton bt4;
	 JButton bt5;
	 JButton input;
	 JButton out;
	 
	 JTextField te1;
	 JLabel  lv1;// 시작 라벨 객체 선언
	 JTextField te2;
	 JLabel  lv2;// 시작 라벨 객체 선언
	 JTextField te3;
	 JLabel  lv3;// 시작 라벨 객체 선언
	 JTextField te4;
	 JLabel  lv4;// 시작 라벨 객체 선언
	 JTextField te5;
	 JLabel  lv5;// 시작 라벨 객체 선언
	 JTextField te6;
	 JLabel  lv6;// 시작 라벨 객체 선언

	 JList imageList; 
	 JScrollPane JSP;
		public void start() {
			if(thread2 == null)
			{
				thread2 = new Thread(this);	// this
				thread2.start();
			}
		}
		public void stop() {
			thread2 = null;	// 쓰레드종료
		}
		public void run() {
			// TODO Auto-generated method stub
			bt1.addActionListener(this);
			bt2.addActionListener(this);
			bt3.addActionListener(this);
			bt4.addActionListener(this);
			bt5.addActionListener(this);
			input.addActionListener(this);
			out.addActionListener(this);
			while(thread2 != null) {
				
				try {
					thread2.sleep(1000);
				} catch (InterruptedException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
				}
				repaint(); // 화면갱신
			}
		}
		protected void paintComponent(Graphics g) {
			// TODO Auto-generated method stub
			super.paintComponent(g);
			drawSturecture(g); // 화면 클리어
			switch(group) {
			case 'A':
				g.drawString(Integer.toString(A_price[7]), 178,170); // 문자열 표시
				g.drawString(" 원", 300,170); // 문자열 표시
				System.out.println("A");
				break;
			case 'B':
				g.drawString(Integer.toString(B_price[7]), 178,170); // 문자열 표시
				break;
			case 'C':
				g.drawString(Integer.toString(C_price[7]), 178,170); // 문자열 표시
				break;
			case 'D':
				g.drawString(Integer.toString(D_price[7]), 178,170); // 문자열 표시
				break;
			case 'E':
				g.drawString(Integer.toString(E_price[7]), 178,170); // 문자열 표시
				break;
			}
			g.drawString("", 178,170); // 문자열 표시
		}
		private void drawSturecture(Graphics g) {
			// TODO Auto-generated method stub
			g.setFont(new Font("맑은고딕", Font.BOLD, 24)); // 폰트
			g.setColor(Color.black);
		}
	public ViewB() {
		this.setLayout(null);
		setBackground(new Color(255,100,50));
		 bt1 = new JButton("A그룹");
		 bt2 = new JButton("B그룹");
		 bt3 = new JButton("C그룹");
		 bt4 = new JButton("D그룹");
		 bt5 = new JButton("E그룹");
		 input = new JButton("입력");
		 out = new JButton("초기화");
		 
		 te1=new JTextField("0",10);
		 lv1 =new JLabel("다이아몬드 : "); //라벨2 생성
		 te2=new JTextField("0",10);
		 lv2 =new JLabel("사파이어 : "); //라벨2 생성
		 te3=new JTextField("0",10);
		 lv3 =new JLabel("에메랄드 : "); //라벨2 생성
		 te4=new JTextField("0",10);
		 lv4 =new JLabel("가넷 : "); //라벨2 생성
		 te5=new JTextField("0",10);
		 lv5 =new JLabel("아쿠아마린 : "); //라벨2 생성
		 te6 =new JTextField("0",10);
		 lv6=new JLabel("루비 : "); //라벨2 생성
		 imageList = new JList();
		 JSP=new JScrollPane(imageList);
		 /*버튼 위치 그룹*/
		 bt1.setSize(97,50);
		 bt1.setLocation(0,0);
		 bt2.setSize(97,50);
		 bt2.setLocation(97,0);
		 bt3.setSize(96,50);
		 bt3.setLocation(192,0);
		 bt4.setSize(96,50);
		 bt4.setLocation(287,0);
		 bt5.setSize(96,50);
		 bt5.setLocation(382,0);
		 
		 /*텍스트 필드 위치 그룹*/
		 lv1.setSize(100,60);  //크키 설정
		 lv1.setLocation(10,40); //위치 설정
		 te1.setSize(40,23);
		 te1.setLocation(87,57);
		 
		 lv2.setSize(100,60);  //크키 설정
		 lv2.setLocation(140,40); //위치 설정
		 te2.setSize(40,23);
		 te2.setLocation(205,57);
		 
		 lv3.setSize(100,60);  //크키 설정
		 lv3.setLocation(260,40); //위치 설정
		 te3.setSize(40,23);
		 te3.setLocation(325,57);
		 
		 lv4.setSize(100,60);  //크키 설정
		 lv4.setLocation(375,40); //위치 설정
		 te4.setSize(40,23);
		 te4.setLocation(415,57);
		 
		 lv5.setSize(100,60);  //크키 설정
		 lv5.setLocation(10,80); //위치 설정
		 te5.setSize(40,23);
		 te5.setLocation(87,98);
		 
		 lv6.setSize(100,60);  //크키 설정
		 lv6.setLocation(140,80); //위치 설정
		 te6.setSize(40,23);
		 te6.setLocation(180,98);
		 
		 input.setSize(80,40);
		 input.setLocation(250,90);
		 out.setSize(80,40);
		 out.setLocation(355,90);
		 
		 JSP.setSize(480,130);
		 JSP.setLocation(0,200);
		 
		 /*버튼 그룹 입니다. */
		  this.add(bt1); //넣고 싶은 버튼을 만들어서 더해주면 된다
		  this.add(bt2); //넣고 싶은 버튼을 만들어서 더해주면 된다
		  this.add(bt3); //넣고 싶은 버튼을 만들어서 더해주면 된다
		  this.add(bt4); //넣고 싶은 버튼을 만들어서 더해주면 된다
		  this.add(bt5); //넣고 싶은 버튼을 만들어서 더해주면 된다
		 /* 텍스트 필드 그룹 입니다.*/
		  this.add(lv1); // 레이아웃지정
		  this.add(te1);
		  this.add(lv2); // 레이아웃지정
		  this.add(te2);
		  this.add(lv3); // 레이아웃지정
		  this.add(te3);
		  this.add(lv4); // 레이아웃지정
		  this.add(te4);
		  this.add(lv5); // 레이아웃지정
		  this.add(te5);
		  this.add(lv6); // 레이아웃지정
		  this.add(te6);
		  
		  this.add(input); // 레이아웃지정
		  this.add(out);
		  
		  this.add(JSP);
		  
		}
	public void actionPerformed(ActionEvent e) {

		  // TODO Auto-generated method stub  

		  if(e.getSource().equals(bt1)){
			  output("A그룹");group='A';
		  }else if(e.getSource().equals(bt2)){
			  output("B그룹");group='B';
		  }else if(e.getSource().equals(bt3)){
			  output("C그룹");group='C';
		  }else if(e.getSource().equals(bt4)){
			  output("D그룹");group='D';
		  }else if(e.getSource().equals(bt5)){
			  output("E그룹");group='E';
		  }else if(e.getSource().equals(input)){
			  listModel.addElement(out_set);
			  imageList.setModel(listModel);
			  out_set="";
		  }else if(e.getSource().equals(out)){
			  out_set="";
			  te1.setText("0");
			  te2.setText("0");
			  te3.setText("0");
			  te4.setText("0");
			  te5.setText("0");
			  te6.setText("0");
			  listModel.removeAllElements();
			  for(int i=0;i<8;i++) {
				    A_price[i] =0;
					B_price[i] =0;
					C_price[i] =0;
					D_price[i] =0;
					E_price[i] =0;
			  }
		  }

		 } //int  Diamond=10000,sapphire=1000,emerald=100,ruby=10,Garnet=5,aquamarine=1;
	public void output(String str) {
	switch(str) {
	case "A그룹":
		A_price[0]+=1;
		A_price[1]+=Integer.parseInt(te1.getText());
		A_price[2]+=Integer.parseInt(te2.getText());
		A_price[3]+=Integer.parseInt(te3.getText());
		A_price[4]+=Integer.parseInt(te4.getText());
		A_price[5]+=Integer.parseInt(te5.getText());
		A_price[6]+=Integer.parseInt(te6.getText());
		A_price[7]+=(A_price[1]*Diamond+A_price[2]*sapphire+A_price[3]*emerald+A_price[4]*ruby+A_price[5]*Garnet+A_price[6]*aquamarine);
		out_set+="A그룹 "+A_price[0]+"번째:"+"다이아 "+A_price[1]+" 개,"+"사파이어 "+A_price[2]+" 개,"+"에메랄드 "+A_price[3]+" 개,"+"가넷 "+A_price[4]+" 개,"+"아쿠아마린 "+A_price[5]+"개,"+"루비 "+A_price[6]+"개,"+"총 "+A_price[7]+" 원";  
		break;
	case "B그룹":
		B_price[0]+=1;
		B_price[1]+=Integer.parseInt(te1.getText());
		B_price[2]+=Integer.parseInt(te2.getText());
		B_price[3]+=Integer.parseInt(te3.getText());
		B_price[4]+=Integer.parseInt(te4.getText());
		B_price[5]+=Integer.parseInt(te5.getText());
		B_price[6]+=Integer.parseInt(te6.getText());
		B_price[7]+=(B_price[1]*Diamond+B_price[2]*sapphire+B_price[3]*emerald+B_price[4]*ruby+B_price[5]*Garnet+B_price[6]*aquamarine);
		out_set+="B그룹 "+B_price[0]+"번째:"+"다이아 "+B_price[1]+" 개,"+"사파이어 "+B_price[2]+" 개,"+"에메랄드 "+B_price[3]+" 개,"+"가넷 "+B_price[4]+" 개,"+"아쿠아마린 "+B_price[5]+"개,"+"루비 "+B_price[6]+"개,"+"총 "+B_price[7]+" 원";
		break;
	case "C그룹":
		C_price[0]+=1;
		C_price[1]+=Integer.parseInt(te1.getText());
		C_price[2]+=Integer.parseInt(te2.getText());
		C_price[3]+=Integer.parseInt(te3.getText());
		C_price[4]+=Integer.parseInt(te4.getText());
		C_price[5]+=Integer.parseInt(te5.getText());
		C_price[6]+=Integer.parseInt(te6.getText());
		C_price[7]+=(C_price[1]*Diamond+C_price[2]*sapphire+C_price[3]*emerald+C_price[4]*ruby+C_price[5]*Garnet+C_price[6]*aquamarine);
		out_set+="C그룹 "+C_price[0]+"번째:"+"다이아 "+C_price[1]+" 개,"+"사파이어 "+C_price[2]+" 개,"+"에메랄드 "+C_price[3]+" 개,"+"가넷 "+C_price[4]+" 개,"+"아쿠아마린 "+C_price[5]+"개,"+"루비 "+C_price[6]+"개,"+"총 "+C_price[7]+" 원";
		break;
	case "D그룹":
		D_price[0]+=1;
		D_price[1]+=Integer.parseInt(te1.getText());
		D_price[2]+=Integer.parseInt(te2.getText());
		D_price[3]+=Integer.parseInt(te3.getText());
		D_price[4]+=Integer.parseInt(te4.getText());
		D_price[5]+=Integer.parseInt(te5.getText());
		D_price[6]+=Integer.parseInt(te6.getText());
		D_price[7]+=(D_price[1]*Diamond+D_price[2]*sapphire+D_price[3]*emerald+D_price[4]*ruby+D_price[5]*Garnet+D_price[6]*aquamarine);
		out_set+="D그룹 "+D_price[0]+"번째:"+"다이아 "+D_price[1]+" 개,"+"사파이어 "+D_price[2]+" 개,"+"에메랄드 "+D_price[3]+" 개,"+"가넷 "+D_price[4]+" 개,"+"아쿠아마린 "+D_price[5]+"개,"+"루비 "+D_price[6]+"개,"+"총 "+D_price[7]+" 원";
		break;
	case "E그룹":
		E_price[0]+=1;
		E_price[1]+=Integer.parseInt(te1.getText());
		E_price[2]+=Integer.parseInt(te2.getText());
		E_price[3]+=Integer.parseInt(te3.getText());
		E_price[4]+=Integer.parseInt(te4.getText());
		E_price[5]+=Integer.parseInt(te5.getText());
		E_price[6]+=Integer.parseInt(te6.getText());
		E_price[7]+=(E_price[1]*Diamond+E_price[2]*sapphire+E_price[3]*emerald+E_price[4]*ruby+E_price[5]*Garnet+E_price[6]*aquamarine);
		out_set+="E그룹 "+E_price[0]+"번째:"+"다이아 "+E_price[1]+" 개,"+"사파이어 "+E_price[2]+" 개,"+"에메랄드 "+E_price[3]+" 개,"+"가넷 "+E_price[4]+" 개,"+"아쿠아마린 "+E_price[5]+"개,"+"루비 "+E_price[6]+"개,"+"총 "+E_price[7]+" 원";
		break;
	}
	}
}
