// %f = �Ǽ��� %d=  ������ �� �ǹ� �Ѵ�. %lf =?? double ��??
//������ ������ &������ ??
#include<stdio.h>
#define mi 0.621371 // define �� �׻� �빮�ڷ�!!
//void ex01(void)
//{
	//printf("�й� 20157135 �̸� �̻��\n");
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
printf("���� �µ��� �Է��ϼ���.");
scanf("%lf",&a);
b=(9.0/5.0)*a+32.0;
printf("ȭ�� �µ��� : %.4lf",b);

}*/
void ex05(void)
{

   double a,b;
   printf("���� km �� �Է�");
   scanf("%lf",&a);
  // b=a*mi;
   printf("������? : %.4lf",mi*a);

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
