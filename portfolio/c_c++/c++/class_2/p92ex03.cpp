#include<iostream>
using namespace std;
/*
int main() { // 메인 함수 
	int a, b; // 매뉴 번호, 인분 수를 저장할 변수 들 
	cout << "*****승리장에 오신 것을 환영합니다***** \n"; //표준 출력 
	while(1) { // while 문 무한 반복 !! 1-> true 0 ->false
		cout << "짬뽕 :1, 짜장 :2, 군만두 :3, 종료 :4 >>";
		cin >> a; // 표준 입력(매뉴 선택) 
		if (a > 4) {// 선택한 매뉴 번호가 4 보다 클 경우 재입력 
			cout << "다시 주문하세요!!\n"; // 표준 출력 
			continue; // 조건문으로 올라간다. 
		}
		else if (a < 4) { // 선택한 매뉴 번호가 4번 이하 일 경우 
			cout << "몇인분?";// 표준 출력
			cin >> b; // 표준 입력 
		}
		switch (a) { // switch 문 a 가 뭘까?? 
		case 1: a 가 1일 경우 !!
			cout << "짬뽕 "<< b << "인분 나왔습니다.\n";
			break;
		case 2: a 가 2일 경우 !!
			cout << "짜장 " << b << "인분 나왔습니다.\n";
			break;
		case 3:a 가 3일 경우 !!
			cout << "군만두 " << b << "인분 나왔습니다.\n";
			break;
		case 4:a 가 4일 경우 !!
			cout << "오늘 영업은 끝났습니다.\n";
			char c = getchar();
			c = getchar();
			return 0; // 메인 함수 종료 !!!

			break;
	  }
	}
}*/