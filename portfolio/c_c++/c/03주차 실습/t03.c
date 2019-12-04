#include<stdio.h>
/*void ex01(void){

	int i;
printf("정수입력해 주세요.");
scanf("%d",&i);
printf("10진수%d",i,"는","16진수는:%x",i);

}*/
/*
void ex02(void){
	int aa,bb,cc,dd,ee,ff;
	printf(" 천만 이하 의 정수 입력 ");
	scanf("%d",&aa);
	bb=aa/10000;
	cc=(aa%10000)/1000;
	dd=(aa%10000%1000)/1000;
	ee=(aa%10000%1000%1000)/100;
	ff=(aa%10000%1000%1000%100)/10;
	printf("%d만%d천%d백%d십%d일",aa,bb,cc,dd,ee,ff);
	
}*/
/*
void ex03(void){

    int x,y;
	int a,b;
	printf(" 두개의 정수 입력 ");
	scanf("%d %d",x,y); 
	  a=(x > y ? x/y :y/x);
	  b=(x > y ? x%y :y%x);
	  printf("두개의 정수는 :%d,%d",x,y,"나머지,몫%d,%d",a,b);

}*/
/*
void ex04(void)
{
	int a,b,c;
    int x,y,z;
	printf(" 두개의 정수 입력 ");
	scanf("%d" ,&x);
	scanf("%d" ,&y);
	scanf("%d" ,&z);
	  a=(x > y ? x : y);
	  b=(a > z ? a : z);
	  printf("가장 큰 수는:%d",b);

}*/
/*
void ex05(void)
{
	int a,b,c;
    int x,y,z;
	printf(" 두개의 정수 입력 ");
	scanf("%d" ,&x);
	  a=(x<<1);
	  b=(x<<2);
	  c=(x<<3);
	  printf("%d%d%d",a,b,c);

}*/
void ex06(void)
{
	int a,b,c;
    int x,y,z;
	printf("정수 입력");
	scanf("%d" ,&x);
   printf("%s",(x>>2>10  ? "ok":"nok"));

}
void main(void){
	//ex01();
	//ex02();
	//ex03();
	  //ex04();
	  //ex05();
	  ex06();
}