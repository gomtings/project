#include<stdio.h>
/*void ex01(void){

	int i;
printf("�����Է��� �ּ���.");
scanf("%d",&i);
printf("10����%d",i,"��","16������:%x",i);

}*/
/*
void ex02(void){
	int aa,bb,cc,dd,ee,ff;
	printf(" õ�� ���� �� ���� �Է� ");
	scanf("%d",&aa);
	bb=aa/10000;
	cc=(aa%10000)/1000;
	dd=(aa%10000%1000)/1000;
	ee=(aa%10000%1000%1000)/100;
	ff=(aa%10000%1000%1000%100)/10;
	printf("%d��%dõ%d��%d��%d��",aa,bb,cc,dd,ee,ff);
	
}*/
/*
void ex03(void){

    int x,y;
	int a,b;
	printf(" �ΰ��� ���� �Է� ");
	scanf("%d %d",x,y); 
	  a=(x > y ? x/y :y/x);
	  b=(x > y ? x%y :y%x);
	  printf("�ΰ��� ������ :%d,%d",x,y,"������,��%d,%d",a,b);

}*/
/*
void ex04(void)
{
	int a,b,c;
    int x,y,z;
	printf(" �ΰ��� ���� �Է� ");
	scanf("%d" ,&x);
	scanf("%d" ,&y);
	scanf("%d" ,&z);
	  a=(x > y ? x : y);
	  b=(a > z ? a : z);
	  printf("���� ū ����:%d",b);

}*/
/*
void ex05(void)
{
	int a,b,c;
    int x,y,z;
	printf(" �ΰ��� ���� �Է� ");
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
	printf("���� �Է�");
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