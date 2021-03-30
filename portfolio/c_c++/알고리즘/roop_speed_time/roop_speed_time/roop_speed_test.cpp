#include <iostream>
#include <thread>
#include <ctime>
#include <algorithm>
#define true 1
#define false 0
using std::thread;
using namespace std;

void test_fun(int num);
void  line_up();
int  time_average(int* time, int size, int percentage);
unsigned int max_num = 4294967295;
int sample = 0, num2 = 0, index = 0;
int* sample_time1;
int* sample_time2;
int* sample_time3;
int st_index1 = 0, st_index2 = 0, st_index3 = 0;
unsigned long total_time[3];
char a = 'A',yesno='n';
bool A = false, B = false, C = false;
/*시간 측정용 변수 입니다.*/
clock_t start, finish;
double duration;
/**/
void func1() {
    if (A == false) {
        cout << "for 테스트를 시작합니다.\n";
        A = true;
    }
    cout << num2;
    start = clock();
    for (int i = 0; i <= num2; i++) {
    }
    finish = clock();
    duration = (double)(finish - start / CLOCKS_PER_SEC);
   // total_time[0] += duration;
    sample_time1[st_index1++] = duration;
    // cout << "for 테스트 종료... 소요시간은 "<< duration<<" 입니다.\n";
}

void func2() {
    if (B == false) {
        cout << "while 테스트를 시작합니다.\n";
        B = true;
    }
    start = clock();
    while (1) {
        if (index == num2) {
            break;
        }
        ++index;
    }
    finish = clock();
    duration = (double)(finish - start / CLOCKS_PER_SEC);
   // total_time[1] += duration;
    sample_time2[st_index2++] = duration;
    //  cout << "while 테스트 종료... 소요시간은 " << duration << " 입니다.\n";
}

void func3() {
    if (C == false) {
        cout << "do-while 테스트를 시작합니다.\n";
        C = true;
    }
    start = clock();
    do {
        if (index == num2) {
            break;
        }
        ++index;
    } while (1);
    finish = clock();
    duration = (double)(finish - start / CLOCKS_PER_SEC);
    //total_time[2] += duration;
    sample_time3[st_index3++] = duration;
    // cout << "do-while 테스트 종료... 소요시간은 " << duration << " 입니다.\n";
}
int main() {
    cout << "샘플링 갯수를 선택하세요.\n";
    cin >> sample;
    sample_time1 = new int[sample];
    sample_time2 = new int[sample];
    sample_time3 = new int[sample];
    cout << "테스트 횟수를 선택하세요.\n";
    cin >> num2;
    cout << "thread 를 사용할까요? y or n\n";
    cin >> yesno;
    if (num2 == 0) {
        cout << "unsigned int 의 값으로 테스트를 진행 합니다.\n";
        num2 = max_num;
    }
    else {
        cout << num2 << " 의 값으로 테스트를 진행 합니다.\n";
    }
    if (yesno == 'N' || yesno == 'n') {//thread 를 사용하지 않습니다. 
        for (int j = 0; j <= sample; j++) {
            test_fun(num2);
        }
    }
    else {
        thread t1(func1);
        thread t2(func2);
        thread t3(func3);
        t1.join();
        t2.join();
        t3.join();
    }
    line_up(); // 시간을 오름 차순으로 정렬 합니다.
    total_time[0] = time_average(sample_time1, sample, 20);
    cout << "for 테스트 종료... 소요시간은 " << (double)(total_time[0] / sample) / 1000 << " 초 입니다.\n";
    total_time[1] = time_average(sample_time2, sample, 20);
    cout << "while 테스트 종료... 소요시간은 " << (double)(total_time[1] / sample) / 1000 << "초 입니다.\n";
    total_time[2] = time_average(sample_time3, sample, 20);
    cout << "do-while 테스트 종료... 소요시간은 " << (double)(total_time[2] / sample) / 1000 << "초 입니다.\n";
    /*
    t1.join();
    t2.join();
    t3.join();*/
}
void test_fun(int num) {
    switch (a)
    {
    case'A':
    {
        if (A == false) {
            cout << "for 테스트를 시작합니다.\n";
            A = true;
        }
        start = clock();
        for (int i = 0; i <= num; i++) {

        }
        finish = clock();
        duration = (double)(finish - start / CLOCKS_PER_SEC);
        total_time[0] += duration;
        sample_time1[st_index1++] = duration;
        // cout << "for 테스트 종료... 소요시간은 "<< duration<<" 입니다.\n";
        a = 'B';
    }
    case'B':
    {
        if (B == false) {
            cout << "while 테스트를 시작합니다.\n";
            B = true;
        }
        start = clock();
        while (1) {
            if (index == num) {
                break;
            }
            ++index;
        }
        finish = clock();
        duration = (double)(finish - start / CLOCKS_PER_SEC);
        total_time[1] += duration;
        sample_time2[st_index2++] = duration;
        //  cout << "while 테스트 종료... 소요시간은 " << duration << " 입니다.\n";
        a = 'C';
    }
    case'C':
    {
        if (C == false) {
            cout << "do-while 테스트를 시작합니다.\n";
            C = true;
        }
        start = clock();
        do {
            if (index == num) {
                break;
            }
            ++index;
        } while (1);
        finish = clock();
        duration = (double)(finish - start / CLOCKS_PER_SEC);
        total_time[2] += duration;
        sample_time3[st_index3++] = duration;
        // cout << "do-while 테스트 종료... 소요시간은 " << duration << " 입니다.\n";
        a = 'A';
    }
    default:
        break;
    }
}
void  line_up() {
    sort(sample_time1, sample_time1 + sample);// for
    sort(sample_time2, sample_time2 + sample);//while
    sort(sample_time3, sample_time3 + sample);//do-while
}
int  time_average(int*time,int size,int percentage) {
    int percent = size * percentage / 100;
    int result = 0;
    for (int v = percent; v < (size- percent); v++) {
        result += time[v];
    }
    delete[] time;
    return result;
}