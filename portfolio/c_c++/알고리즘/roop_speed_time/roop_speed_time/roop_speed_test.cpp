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
/*�ð� ������ ���� �Դϴ�.*/
clock_t start, finish;
double duration;
/**/
void func1() {
    if (A == false) {
        cout << "for �׽�Ʈ�� �����մϴ�.\n";
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
    // cout << "for �׽�Ʈ ����... �ҿ�ð��� "<< duration<<" �Դϴ�.\n";
}

void func2() {
    if (B == false) {
        cout << "while �׽�Ʈ�� �����մϴ�.\n";
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
    //  cout << "while �׽�Ʈ ����... �ҿ�ð��� " << duration << " �Դϴ�.\n";
}

void func3() {
    if (C == false) {
        cout << "do-while �׽�Ʈ�� �����մϴ�.\n";
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
    // cout << "do-while �׽�Ʈ ����... �ҿ�ð��� " << duration << " �Դϴ�.\n";
}
int main() {
    cout << "���ø� ������ �����ϼ���.\n";
    cin >> sample;
    sample_time1 = new int[sample];
    sample_time2 = new int[sample];
    sample_time3 = new int[sample];
    cout << "�׽�Ʈ Ƚ���� �����ϼ���.\n";
    cin >> num2;
    cout << "thread �� ����ұ��? y or n\n";
    cin >> yesno;
    if (num2 == 0) {
        cout << "unsigned int �� ������ �׽�Ʈ�� ���� �մϴ�.\n";
        num2 = max_num;
    }
    else {
        cout << num2 << " �� ������ �׽�Ʈ�� ���� �մϴ�.\n";
    }
    if (yesno == 'N' || yesno == 'n') {//thread �� ������� �ʽ��ϴ�. 
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
    line_up(); // �ð��� ���� �������� ���� �մϴ�.
    total_time[0] = time_average(sample_time1, sample, 20);
    cout << "for �׽�Ʈ ����... �ҿ�ð��� " << (double)(total_time[0] / sample) / 1000 << " �� �Դϴ�.\n";
    total_time[1] = time_average(sample_time2, sample, 20);
    cout << "while �׽�Ʈ ����... �ҿ�ð��� " << (double)(total_time[1] / sample) / 1000 << "�� �Դϴ�.\n";
    total_time[2] = time_average(sample_time3, sample, 20);
    cout << "do-while �׽�Ʈ ����... �ҿ�ð��� " << (double)(total_time[2] / sample) / 1000 << "�� �Դϴ�.\n";
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
            cout << "for �׽�Ʈ�� �����մϴ�.\n";
            A = true;
        }
        start = clock();
        for (int i = 0; i <= num; i++) {

        }
        finish = clock();
        duration = (double)(finish - start / CLOCKS_PER_SEC);
        total_time[0] += duration;
        sample_time1[st_index1++] = duration;
        // cout << "for �׽�Ʈ ����... �ҿ�ð��� "<< duration<<" �Դϴ�.\n";
        a = 'B';
    }
    case'B':
    {
        if (B == false) {
            cout << "while �׽�Ʈ�� �����մϴ�.\n";
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
        //  cout << "while �׽�Ʈ ����... �ҿ�ð��� " << duration << " �Դϴ�.\n";
        a = 'C';
    }
    case'C':
    {
        if (C == false) {
            cout << "do-while �׽�Ʈ�� �����մϴ�.\n";
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
        // cout << "do-while �׽�Ʈ ����... �ҿ�ð��� " << duration << " �Դϴ�.\n";
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