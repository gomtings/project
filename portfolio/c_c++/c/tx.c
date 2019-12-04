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
	printf("임의의 수 입력");
	scanf("%d", &n);
	//five(n);
	//inchtocenti(n);
	//printf("실수 %f 의 절대값은 %d 입니다.", (double)n, absolute(n) );
	//printf("정수 %d 는 %d , %s  입니다.",n, isprime(n),((isprime(n)==0)?"소수x":"소수0"));
	//printf("%d", isExceedCount(7));
	//getnumber(45);
	//int d=mychprint(0);
	//if(d==0)
	//	printf("<main<>함수>: %d 을 입력하여 죵료",d);
	Mm();
	getchar();
	getchar();
}
int getCount() {
	int g;
	printf("반복할 횟수 입력 :");
	scanf("%d", &g);
	return g;
}
char getInchar(int x) {
	char cha,c,h;
	for (int i = 0; i < x; i++) {
		printf("문자 입력 :");
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
			printf("=>알파벳이 아닙니다. 다시 입력 합니다.");
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
	printf("<input<>함수> 문자입력 :");
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
	printf("<next<>함수 :>");
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
	printf("난수는 : %d,", v);
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
	printf("1에서 100 사이에서 한수가 결정 되었습니다.\n기회는 최대 %d 번입니다.",n);
	printf("이정수는 무었일까요?");
	for (int i = 1; i <= n; i++) {
		scanf("%d", &x);
		if (x < y) {
			printf("입력한 수보다 큽니다. 다시입력하세요. :");
		}
		else if(x > y) {
			printf("입력한 수보다 작습니다. 다시입력하세요. :");
		}
		else {
			printf("정답입니다.");
			return 0;
		}
	}
	printf("\n모든 기회를 다쓰셧습니다.");
	return 1;
}
int isprime(int a) //#3 소수 인지 확인하는 함수 입니다. 
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
	printf("인치 %d 는 %f cm 입니다.",n,(double)(n*2.54));
}
int square(int n) {
	return (n*n);
}
int cube(int n) {
	return (square(n)*n);
}
void five(int n) {
	printf("%d 의 5제곱은 :%d 입니다.",n, (square(n)*cube(n)));
}