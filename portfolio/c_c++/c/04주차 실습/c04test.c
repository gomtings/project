#include<stdio.h>
#include<ctype.h>
/*
void ex01(void){
	int w;
	printf("원하시는 월을 입력하세요.");
	scanf("%d",&w);
	switch(w)
	{
		case 1:
		case 2:
		case 3:
			printf("1분기 입니다.");
		break;
		case 4:
		case 5:
		case 6:
			printf("2분기 입니다.");
		break;
		case 7:
		case 8:
		case 9:
			printf("3분기 입니다.");
		break;
		case 10:
		case 11:
		case 12:
			printf("4분기 입니다.");
		break;
	}

}
*/
/*void ex03(void){
 int i,j;
	printf("정수를 입력 하세요.");
	scanf("%d",&i);
	switch(i/2>=10){
	case 1:
		printf("OK");
		break;
	case 0:
		printf("NOK");
		break;
	}

}
*/
/*void ex04(void){
	char c;
do{

	printf("문자를 입력 하세요.");
	scanf("%c",&c);
	if(c =='q'){
		printf("종료합니다.");
		break;
	}
	else{
	printf("입력한 문자는%c",c);
	}

}while(1);

}*/
/*
void ex05(void){

	int i;
	int count=0;
	printf("정수를 입력");
	scanf("%d",&i);
	while(i>=1){
		(i&1)?count++: /*111&&001=1 //011&001=1 //--1&001-1*//* i=i>>1; //011 //001//000
	}
	printf("%d",count);

}*/
/*
void ex05_1(void){
	int i,count=1;
	printf("정수를 입력");
	scanf("%d",&i);
	while(i>1){
		if(i%2)
			count++;
		i/=2;
	}
	printf("%d",count);
}*/
/*
void ex06(void){
	char c;
	int count=0;
	printf("알파벳 문자 1개 입력.");
	scanf("%c",&c);
	do{
		if(count>=5){
			count=0;
			printf("\n");
	}
		else{

			if('a'<=c&&c<='z'){
		 printf("%c",(char)(c++));
	     }

		}
	 count++;
	}while(c>='a' && c<='z'||c>='A' && c<='Z');
}
//toupper == 소문자를 대문자로 tolower == 대문자를 소문자로
*/
void ex07(void){
int i=0;
int sum=0;
do{
sum+=i;
i++;
}while(sum<10000);
printf("10000을 넘지 않는 가장 큰수는 %d 이때의 n 값은 %d",sum-i,i-1);
}
void main(void){
	// ex01();
	 //ex03();
	 //ex04();
	   //ex05();
	  //ex05_1();
	  //ex06();
	  ex07();
	
}