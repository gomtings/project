#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int square(int n);
int cube(int n);
void five(int n);
void inchtocenti(int n);
int absolute(double n);
int isprime(int a);
int myrand();
int isExceedCount(int n);
int getnumber(int x);
char input();
char next(char ch, int n);
int mychprint(int n);
int getCount();
char getInchar(int x);
void Mm();

void main(void) {
	int n;
	printf("������ �� �Է�");
	scanf("%d", &n);
	//five(n);
	//inchtocenti(n);
	//printf("�Ǽ� %f �� ���밪�� %d �Դϴ�.", (double)n, absolute(n) );
	//printf("���� %d �� %d , %s  �Դϴ�.",n, isprime(n),((isprime(n)==0)?"�Ҽ�x":"�Ҽ�0"));
	//printf("%d", isExceedCount(7));
	//getnumber(45);
	//int d=mychprint(0);
	//if(d==0)
	//	printf("<main<>�Լ�>: %d �� �Է��Ͽ� �շ�",d);
	Mm();
	getchar();
	getchar();
}
int getCount() {
	int g;
	printf("�ݺ��� Ƚ�� �Է� :");
	scanf("%d", &g);
	return g;
}
char getInchar(int x) {
	char cha,c,h;
	for (int i = 0; i < x; i++) {
		printf("���� �Է� :");
		scanf("%c", &cha);
		if (cha >= 'A'&&cha <= 'Z') {
			if ('M' >= che) {
				c = 'M' - che;
				if (c >= ('M' - che))
					c = 'M' - che;
				else

			}
			else if('M' <= che){
				c = che - 'M';
				if (c >= (che - 'M'))
					c = che - 'M';
				else
			}
		}
		else if (cha >= 'a'&&cha <= 'z') {
			if ('m' >= che) {
				h = 'm' - che;
				if (h >= ('m' - che))
					h = 'm' - che;
				else

			}
			else if ('m' <= che) {
				h = che - 'm';
				if (h >= (che - 'm'))
					h = che - 'm';
				else
			}
		}else {
			printf("=>���ĺ��� �ƴմϴ�. �ٽ� �Է� �մϴ�.");
			continue;
		}
	}
	if (c <= h)
		return c;
	else
		return h;

}
void Mm() {
	getInchar(getCount());
}

char input() {
	char c;
	while (1){
	printf("<input<>�Լ�> �����Է� :");
	scanf("%c", &c);
	if (c >= 'a'&&c >= 'z')
		return (char)(c - 32);
	else if (c >= 'A' && c >= 'Z')
		return  (char)(c + 32);
	else if (c == 0)
		return 0;
	else
		continue;
	}
}
char next(char ch,int n) {
	printf("<next<>�Լ� :>");
	for (int i = 1; i <= n; i++) {
		printf("%c",ch);
	}
	if (ch == 0)
		return 0;
}
int mychprint(int f) {
	f;
	while (1) {
		srand((long)time(NULL));
		int v = rand() % 4 + 1;
		char c = next(input(), v);
		if (c== 0)
			return 0;
}
}

int getnumber(int x) {
	int i = 1,v1;
	srand((long)time(NULL));
	int v = rand() % x + 1;
	printf("������ : %d,", v);
	while (i != 6) {
	v1 = rand() % x + 1;
	if (v == v1) {
		int v1 = rand() % x + 1;
	}
	else {
		printf("%d,",v1);
		i++;
	}
	}
	return 0;
}
int myrand() {
	srand((long)time(NULL));
	int v= rand() % 100 + 1;
	return v;
}
int isExceedCount(int n) {
	int x,y= myrand();
	printf("1���� 100 ���̿��� �Ѽ��� ���� �Ǿ����ϴ�.\n��ȸ�� �ִ� %d ���Դϴ�.",n);
	printf("�������� �����ϱ��?");
	for (int i = 1; i <= n; i++) {
		scanf("%d", &x);
		if (x < y) {
			printf("�Է��� ������ Ů�ϴ�. �ٽ��Է��ϼ���. :");
		}
		else if(x > y) {
			printf("�Է��� ������ �۽��ϴ�. �ٽ��Է��ϼ���. :");
		}
		else {
			printf("�����Դϴ�.");
			return 0;
		}
	}
	printf("\n��� ��ȸ�� �پ��˽��ϴ�.");
	return 1;
}
int isprime(int a) //#3 �Ҽ� ���� Ȯ���ϴ� �Լ� �Դϴ�. 
{
	int i;
	if (a <= 3)
		return 1;
	else {
		for (i = 2; i < a; i++) {
			if (a % i == 0) {
				return 0;
				break;
			}
		}
		if (i == a)
			return 1;
	}
	return 0;
}
int absolute(double n) {
	return abs(n);
}
void inchtocenti(int n) {
	printf("��ġ %d �� %f cm �Դϴ�.",n,(double)(n*2.54));
}
int square(int n) {
	return (n*n);
}
int cube(int n) {
	return (square(n)*n);
}
void five(int n) {
	printf("%d �� 5������ :%d �Դϴ�.",n, (square(n)*cube(n)));
}