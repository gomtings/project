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
	 JLabel  lv1;// ���� �� ��ü ����
	 JTextField te2;
	 JLabel  lv2;// ���� �� ��ü ����
	 JTextField te3;
	 JLabel  lv3;// ���� �� ��ü ����
	 JTextField te4;
	 JLabel  lv4;// ���� �� ��ü ����
	 JTextField te5;
	 JLabel  lv5;// ���� �� ��ü ����
	 JTextField te6;
	 JLabel  lv6;// ���� �� ��ü ����

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
			thread2 = null;	// ����������
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
				repaint(); // ȭ�鰻��
			}
		}
		protected void paintComponent(Graphics g) {
			// TODO Auto-generated method stub
			super.paintComponent(g);
			drawSturecture(g); // ȭ�� Ŭ����
			switch(group) {
			case 'A':
				g.drawString(Integer.toString(A_price[7]), 178,170); // ���ڿ� ǥ��
				g.drawString(" ��", 300,170); // ���ڿ� ǥ��
				System.out.println("A");
				break;
			case 'B':
				g.drawString(Integer.toString(B_price[7]), 178,170); // ���ڿ� ǥ��
				break;
			case 'C':
				g.drawString(Integer.toString(C_price[7]), 178,170); // ���ڿ� ǥ��
				break;
			case 'D':
				g.drawString(Integer.toString(D_price[7]), 178,170); // ���ڿ� ǥ��
				break;
			case 'E':
				g.drawString(Integer.toString(E_price[7]), 178,170); // ���ڿ� ǥ��
				break;
			}
			g.drawString("", 178,170); // ���ڿ� ǥ��
		}
		private void drawSturecture(Graphics g) {
			// TODO Auto-generated method stub
			g.setFont(new Font("�������", Font.BOLD, 24)); // ��Ʈ
			g.setColor(Color.black);
		}
	public ViewB() {
		this.setLayout(null);
		setBackground(new Color(255,100,50));
		 bt1 = new JButton("A�׷�");
		 bt2 = new JButton("B�׷�");
		 bt3 = new JButton("C�׷�");
		 bt4 = new JButton("D�׷�");
		 bt5 = new JButton("E�׷�");
		 input = new JButton("�Է�");
		 out = new JButton("�ʱ�ȭ");
		 
		 te1=new JTextField("0",10);
		 lv1 =new JLabel("���̾Ƹ�� : "); //��2 ����
		 te2=new JTextField("0",10);
		 lv2 =new JLabel("�����̾� : "); //��2 ����
		 te3=new JTextField("0",10);
		 lv3 =new JLabel("���޶��� : "); //��2 ����
		 te4=new JTextField("0",10);
		 lv4 =new JLabel("���� : "); //��2 ����
		 te5=new JTextField("0",10);
		 lv5 =new JLabel("����Ƹ��� : "); //��2 ����
		 te6 =new JTextField("0",10);
		 lv6=new JLabel("��� : "); //��2 ����
		 imageList = new JList();
		 JSP=new JScrollPane(imageList);
		 /*��ư ��ġ �׷�*/
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
		 
		 /*�ؽ�Ʈ �ʵ� ��ġ �׷�*/
		 lv1.setSize(100,60);  //ũŰ ����
		 lv1.setLocation(10,40); //��ġ ����
		 te1.setSize(40,23);
		 te1.setLocation(87,57);
		 
		 lv2.setSize(100,60);  //ũŰ ����
		 lv2.setLocation(140,40); //��ġ ����
		 te2.setSize(40,23);
		 te2.setLocation(205,57);
		 
		 lv3.setSize(100,60);  //ũŰ ����
		 lv3.setLocation(260,40); //��ġ ����
		 te3.setSize(40,23);
		 te3.setLocation(325,57);
		 
		 lv4.setSize(100,60);  //ũŰ ����
		 lv4.setLocation(375,40); //��ġ ����
		 te4.setSize(40,23);
		 te4.setLocation(415,57);
		 
		 lv5.setSize(100,60);  //ũŰ ����
		 lv5.setLocation(10,80); //��ġ ����
		 te5.setSize(40,23);
		 te5.setLocation(87,98);
		 
		 lv6.setSize(100,60);  //ũŰ ����
		 lv6.setLocation(140,80); //��ġ ����
		 te6.setSize(40,23);
		 te6.setLocation(180,98);
		 
		 input.setSize(80,40);
		 input.setLocation(250,90);
		 out.setSize(80,40);
		 out.setLocation(355,90);
		 
		 JSP.setSize(480,130);
		 JSP.setLocation(0,200);
		 
		 /*��ư �׷� �Դϴ�. */
		  this.add(bt1); //�ְ� ���� ��ư�� ���� �����ָ� �ȴ�
		  this.add(bt2); //�ְ� ���� ��ư�� ���� �����ָ� �ȴ�
		  this.add(bt3); //�ְ� ���� ��ư�� ���� �����ָ� �ȴ�
		  this.add(bt4); //�ְ� ���� ��ư�� ���� �����ָ� �ȴ�
		  this.add(bt5); //�ְ� ���� ��ư�� ���� �����ָ� �ȴ�
		 /* �ؽ�Ʈ �ʵ� �׷� �Դϴ�.*/
		  this.add(lv1); // ���̾ƿ�����
		  this.add(te1);
		  this.add(lv2); // ���̾ƿ�����
		  this.add(te2);
		  this.add(lv3); // ���̾ƿ�����
		  this.add(te3);
		  this.add(lv4); // ���̾ƿ�����
		  this.add(te4);
		  this.add(lv5); // ���̾ƿ�����
		  this.add(te5);
		  this.add(lv6); // ���̾ƿ�����
		  this.add(te6);
		  
		  this.add(input); // ���̾ƿ�����
		  this.add(out);
		  
		  this.add(JSP);
		  
		}
	public void actionPerformed(ActionEvent e) {

		  // TODO Auto-generated method stub  

		  if(e.getSource().equals(bt1)){
			  output("A�׷�");group='A';
		  }else if(e.getSource().equals(bt2)){
			  output("B�׷�");group='B';
		  }else if(e.getSource().equals(bt3)){
			  output("C�׷�");group='C';
		  }else if(e.getSource().equals(bt4)){
			  output("D�׷�");group='D';
		  }else if(e.getSource().equals(bt5)){
			  output("E�׷�");group='E';
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
	case "A�׷�":
		A_price[0]+=1;
		A_price[1]+=Integer.parseInt(te1.getText());
		A_price[2]+=Integer.parseInt(te2.getText());
		A_price[3]+=Integer.parseInt(te3.getText());
		A_price[4]+=Integer.parseInt(te4.getText());
		A_price[5]+=Integer.parseInt(te5.getText());
		A_price[6]+=Integer.parseInt(te6.getText());
		A_price[7]+=(A_price[1]*Diamond+A_price[2]*sapphire+A_price[3]*emerald+A_price[4]*ruby+A_price[5]*Garnet+A_price[6]*aquamarine);
		out_set+="A�׷� "+A_price[0]+"��°:"+"���̾� "+A_price[1]+" ��,"+"�����̾� "+A_price[2]+" ��,"+"���޶��� "+A_price[3]+" ��,"+"���� "+A_price[4]+" ��,"+"����Ƹ��� "+A_price[5]+"��,"+"��� "+A_price[6]+"��,"+"�� "+A_price[7]+" ��";  
		break;
	case "B�׷�":
		B_price[0]+=1;
		B_price[1]+=Integer.parseInt(te1.getText());
		B_price[2]+=Integer.parseInt(te2.getText());
		B_price[3]+=Integer.parseInt(te3.getText());
		B_price[4]+=Integer.parseInt(te4.getText());
		B_price[5]+=Integer.parseInt(te5.getText());
		B_price[6]+=Integer.parseInt(te6.getText());
		B_price[7]+=(B_price[1]*Diamond+B_price[2]*sapphire+B_price[3]*emerald+B_price[4]*ruby+B_price[5]*Garnet+B_price[6]*aquamarine);
		out_set+="B�׷� "+B_price[0]+"��°:"+"���̾� "+B_price[1]+" ��,"+"�����̾� "+B_price[2]+" ��,"+"���޶��� "+B_price[3]+" ��,"+"���� "+B_price[4]+" ��,"+"����Ƹ��� "+B_price[5]+"��,"+"��� "+B_price[6]+"��,"+"�� "+B_price[7]+" ��";
		break;
	case "C�׷�":
		C_price[0]+=1;
		C_price[1]+=Integer.parseInt(te1.getText());
		C_price[2]+=Integer.parseInt(te2.getText());
		C_price[3]+=Integer.parseInt(te3.getText());
		C_price[4]+=Integer.parseInt(te4.getText());
		C_price[5]+=Integer.parseInt(te5.getText());
		C_price[6]+=Integer.parseInt(te6.getText());
		C_price[7]+=(C_price[1]*Diamond+C_price[2]*sapphire+C_price[3]*emerald+C_price[4]*ruby+C_price[5]*Garnet+C_price[6]*aquamarine);
		out_set+="C�׷� "+C_price[0]+"��°:"+"���̾� "+C_price[1]+" ��,"+"�����̾� "+C_price[2]+" ��,"+"���޶��� "+C_price[3]+" ��,"+"���� "+C_price[4]+" ��,"+"����Ƹ��� "+C_price[5]+"��,"+"��� "+C_price[6]+"��,"+"�� "+C_price[7]+" ��";
		break;
	case "D�׷�":
		D_price[0]+=1;
		D_price[1]+=Integer.parseInt(te1.getText());
		D_price[2]+=Integer.parseInt(te2.getText());
		D_price[3]+=Integer.parseInt(te3.getText());
		D_price[4]+=Integer.parseInt(te4.getText());
		D_price[5]+=Integer.parseInt(te5.getText());
		D_price[6]+=Integer.parseInt(te6.getText());
		D_price[7]+=(D_price[1]*Diamond+D_price[2]*sapphire+D_price[3]*emerald+D_price[4]*ruby+D_price[5]*Garnet+D_price[6]*aquamarine);
		out_set+="D�׷� "+D_price[0]+"��°:"+"���̾� "+D_price[1]+" ��,"+"�����̾� "+D_price[2]+" ��,"+"���޶��� "+D_price[3]+" ��,"+"���� "+D_price[4]+" ��,"+"����Ƹ��� "+D_price[5]+"��,"+"��� "+D_price[6]+"��,"+"�� "+D_price[7]+" ��";
		break;
	case "E�׷�":
		E_price[0]+=1;
		E_price[1]+=Integer.parseInt(te1.getText());
		E_price[2]+=Integer.parseInt(te2.getText());
		E_price[3]+=Integer.parseInt(te3.getText());
		E_price[4]+=Integer.parseInt(te4.getText());
		E_price[5]+=Integer.parseInt(te5.getText());
		E_price[6]+=Integer.parseInt(te6.getText());
		E_price[7]+=(E_price[1]*Diamond+E_price[2]*sapphire+E_price[3]*emerald+E_price[4]*ruby+E_price[5]*Garnet+E_price[6]*aquamarine);
		out_set+="E�׷� "+E_price[0]+"��°:"+"���̾� "+E_price[1]+" ��,"+"�����̾� "+E_price[2]+" ��,"+"���޶��� "+E_price[3]+" ��,"+"���� "+E_price[4]+" ��,"+"����Ƹ��� "+E_price[5]+"��,"+"��� "+E_price[6]+"��,"+"�� "+E_price[7]+" ��";
		break;
	}
	}
}
