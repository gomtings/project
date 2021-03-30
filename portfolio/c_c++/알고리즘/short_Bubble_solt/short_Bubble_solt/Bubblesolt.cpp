#include <iostream>
#include <thread>
#include <ctime>
#include <algorithm>

#define true 1
#define false 0
using std::thread;
using namespace std;

void insert(int *array, int size);
void print(int *array, int size);
void bubble(int *array, int size);
unsigned int max_num = 4294967295;
int sample = 0, num2 = 0, index = 0;
int st_index1 = 0, st_index2 = 0, st_index3 = 0;
unsigned long total_time[3];
char a = 'A', yesno = 'n';
bool A = false, B = false, C = false;
/*시간 측정용 변수 입니다.*/
clock_t start1, finish1, start2, finish2;
double duration1, duration2;

int i = 0,j = 0,array_size=100000,tp;
int *arry = new int[array_size]; 
/**/
void func1() { //3??
	if (arry[j] > arry[j + 1]) {
		tp = arry[j + 1];
		arry[j + 1] = arry[j];
		arry[j] = tp;
	}
}
void func2() { // 1
	i++;
	//cout << "func2 : " << i << "\n";
	if (i == array_size) {
		A = true;
		//cout << j << "???";
	}
}

void func3(int *array, int size) {//2
	for (j = 0; j < array_size; j++) {
		//cout << "func3 : " << j << "\n";
		if (array[j] > array[j + 1]) {
			tp = arry[j + 1];
		    array[j + 1] = array[j];
			array[j] = tp;
			//cout << tp << "\n";
		}
	}
	if (j == array_size - (i + 1)) {
		B = true;
		//cout << j << "+++";
	}
}
int main() {
	insert(arry, array_size);
	print(arry, array_size);// 쓰레드 정렬 전 출력 
	cout << "==================================쓰레드 bubble 테스트 시작===================================\n";
	start1 = clock();
    while (true) {
        thread t2(func2); //1
		t2.join(); // 1
        thread t3(&func3, arry, array_size);//2
		t3.join(); //2
       // thread t1(func1);//3
        //t1.join();//3

		if (A == true || B == true) {
			break;
		}
    }
	finish1 = clock();
	duration1 = (double)(finish1 - start1 / CLOCKS_PER_SEC);
	cout << "==================================쓰레드 bubble 테스트 종료===================================\n";
	print(arry, array_size); // 쓰레드 정렬 후 출력
	cout << "==================================bubble 테스트 시작===================================\n";
	insert(arry, array_size);
	print(arry, array_size);// bubble 정렬 전 출력
	start2 = clock();
	bubble(arry, array_size);
	finish2 = clock();
	duration2 = (double)(finish2 - start2 / CLOCKS_PER_SEC);
	cout << "==================================bubble 테스트 종료===================================\n";
	print(arry, array_size);// bubble 정렬 전 출력
	cout << "----------------------------------------End------------------------------------------\n";
	cout << "데이터 "<< array_size<<"개의 테스트가 모두 종료 되었습니다.\n";
	cout << "쓰레드 테스트... 소요시간은 " << (double)duration1 / 1000 << " 초 입니다.\n";
	cout << "bubble  테스트... 소요시간은 " << (double)duration2 / 1000 << " 초 입니다.\n";
}
void insert(int *array, int size) {
	int temp;
	srand((unsigned int)time(0));
	for (int x = 0; x < size; x++) {
		array[x]= round((double)rand() / RAND_MAX * size); // 난수 범위 지정 round((double)rand()/RAND_MAX*원하는 최댓값)
	}
}
void print(int *array, int size) {
	cout << "{";
	for (int x = 0; x < size; x++) {
		cout << array[x]<<",";
	}
	cout <<"}\n";
}
void bubble(int *array, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[j] > array[j + 1]) {
				tp = arry[j + 1];
				array[j + 1] = array[j];
				array[j] = tp;
			}
		}
	}
}