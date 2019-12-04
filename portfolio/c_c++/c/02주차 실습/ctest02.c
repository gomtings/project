// %f = 실수형 %d=  정수형 을 의미 한다. %lf =?? double 형??
//변수에 저장은 &변수명 ??
#include<stdio.h>
#define mi 0.621371 // define 은 항상 대문자로!!
//void ex01(void)
//{
	//printf("학번 20157135 이름 이상우\n");
//}
/*void ex02(void)
{
   //printf("ex02!!");
	double doo;
	doo = 523.45;
	printf("doo%.1f\n",doo);
}*/
/*void ex03(void)
{
	//printf("A+2=??\n");
	char ch = 'A';
    char ch1 = 'a';
    printf("ch = %c ,ch1 = %c \n",ch,ch1);
    printf("ch = %d ,ch1 = %d \n",ch,ch1);
    printf("ch = %c ,ch1 = %d \n",(ch+2),(ch1+2));
    printf("define MAX=%d\n",MAX);
}*/
/*void ex04(void)
{

double a,b,c;
printf("섭씨 온도를 입력하세요.");
scanf("%lf",&a);
b=(9.0/5.0)*a+32.0;
printf("화씨 온도는 : %.4lf",b);

}*/
void ex05(void)
{

   double a,b;
   printf("길이 km 를 입력");
   scanf("%lf",&a);
  // b=a*mi;
   printf("마일은? : %.4lf",mi*a);

}
void main(void)
{
	//ex01();
	//ex02();
	//ex03();
	//ex04();
	ex05();
	//getchar();
}
