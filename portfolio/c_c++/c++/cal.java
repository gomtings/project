package codefestival;
import java.util.*;
import java.io.*;
public class cal {
	public static void main(String[] args) {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		try {
		int count = 0;
		int z=0;
		int[] sum;
		int index = -1;
		char[] ch = {'+','-','*','/','0','1','2','3','4','5','6','7','8','9'}; // 연산자가 들어가 있는 배열 
		char[] cal = null;
		int[] cal_index = null;
		int[] num = null;
		System.out.print("계산하고 싶은 수식을 입력해 주세요. \n@ex : 1+2+3+4...\n");
		String str = in.readLine();
		for (int j = 0; j < str.length(); j++) {
			for (int i = 0; i < ch.length; i++) {
				if (str.charAt(j) == ch[i]) {
					
				}else {
					throw new MyException(); // 에러를 생성 한다. 
				}
			}
		}
		for (int j = 0; j < str.length(); j++) {
			for (int i = 0; i < 4; i++) {
				if (str.charAt(j) == ch[i]) {
					count++;
				}
			}
		}
		cal = new char[count]; //  연산자 
		cal_index = new int[count]; // 연산자의 인덱스
		num = new int[count+1]; // 계 산 할 값
		sum = new int[count];
			for (int j = 0; j < str.length(); j++) {
				for (int i = 0; i < 4; i++) {
					if (str.charAt(j) == ch[i]) {
						if(z<count) {
						cal[z] = str.charAt(j);
							cal_index[z] = j+1;	
							z++;
						}else {
							continue;
						}
							
					}
				}
			}
			num[0]=Integer.parseInt(str.substring(0,cal_index[0]-1));
			for(int i=0;i<cal_index.length-1;i++) {
				num[i+1]=Integer.parseInt(str.substring(cal_index[i],cal_index[i+1]-1));
			}
			num[num.length-1]=Integer.parseInt(str.substring(cal_index[cal_index.length-1]));
		
		for (int c = 0; c < num.length-1; c++) {
			switch (cal[c]) {
			case '*':
				if (c == 0) {
					sum[c] = num[c] * num[c + 1];
					index = c;
				} else {
					sum[c] = sum[index] * num[c + 1];
					index = c;
				}
				break;

			case '/':
				if (c == 0) {
					sum[c] = num[c] / num[c + 1];
					index = c;
				} else {
					sum[c] = sum[index] / num[c + 1];
					index = c;
				}
				break;

			case '+':
				if (c == 0) {
					sum[c] = num[c] + num[c + 1];
					index = c;
				} else {
					sum[c] = sum[index] + num[c + 1];
					index = c;
				}
				break;

			case '-':
				if (c == 0) {
					sum[c] = num[c] - num[c + 1];
					index = c;
				} else {
					sum[c] = sum[index] - num[c + 1];
					index = c;
				}
				break;
			}
		}
		System.out.println("답은 : "+sum[index]+" 입니다.");	
		}catch(Exception e){
			System.out.println(e.getMessage());
		}
		
	}
}