#include<stdio.h>
#include<ctype.h>
/*
void ex01(void){
	int w;
	printf("���Ͻô� ���� �Է��ϼ���.");
	scanf("%d",&w);
	switch(w)
	{
		case 1:
		case 2:
		case 3:
			printf("1�б� �Դϴ�.");
		break;
		case 4:
		case 5:
		case 6:
			printf("2�б� �Դϴ�.");
		break;
		case 7:
		case 8:
		case 9:
			printf("3�б� �Դϴ�.");
		break;
		case 10:
		case 11:
		case 12:
			printf("4�б� �Դϴ�.");
		break;
	}

}
*/
/*void ex03(void){
 int i,j;
	printf("������ �Է� �ϼ���.");
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

	printf("���ڸ� �Է� �ϼ���.");
	scanf("%c",&c);
	if(c =='q'){
		printf("�����մϴ�.");
		break;
	}
	else{
	printf("�Է��� ���ڴ�%c",c);
	}

}while(1);

}*/
/*
void ex05(void){

	int i;
	int count=0;
	printf("������ �Է�");
	scanf("%d",&i);
	while(i>=1){
		(i&1)?count++: /*111&&001=1 //011&001=1 //--1&001-1*//* i=i>>1; //011 //001//000
	}
	printf("%d",count);

}*/
/*
void ex05_1(void){
	int i,count=1;
	printf("������ �Է�");
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
	printf("���ĺ� ���� 1�� �Է�.");
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
//toupper == �ҹ��ڸ� �빮�ڷ� tolower == �빮�ڸ� �ҹ��ڷ�
*/
void ex07(void){
int i=0;
int sum=0;
do{
sum+=i;
i++;
}while(sum<10000);
printf("10000�� ���� �ʴ� ���� ū���� %d �̶��� n ���� %d",sum-i,i-1);
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