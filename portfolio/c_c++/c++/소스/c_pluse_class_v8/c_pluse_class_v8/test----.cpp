#include<iostream>
using namespace std;
int a[] = { 10, 40, 1, 5, 22, 45, 65 };
int temp[7];
void mergeSort(int a[]);
void internarMergeSort(int a[], int temp[], int m, int n);
void merge(int a[], int temp[], int m, int p, int q, int n);
int main() {
	for (int i = 0; i < 7; i++) {
		cout << a[i] << ",";
	}
	cout << "------------------";
	mergeSort(a);
	for (int i = 0; i < 7; i++) {
		cout << a[i] << ",";
	}
	char c = getchar();
}
void mergeSort(int a[]) {
}
void internarMergeSort( int a[] ,int temp[] , int m , int n  ) {
	if (m < n) {
		int middle = (m + n) / 2;
		internarMergeSort(a, temp, m, middle);
		internarMergeSort(a, temp, middle=1, n);
		merge(a,temp,m,middle,middle+1,n);
	}
}
void merge(int a[], int temp[], int m, int p, int q, int n) {
	int t = m;
	int numElements = n - m + 1;
	while (m <= p && q <= n) {
		if (a[m] < a[q])
			temp[t++] = a[m++];
		else
			temp[t++] = a[q++];
	}
	while(m<=p)
		temp[t++] = a[m++];
	while (q <= n)
		temp[t++] = a[q++];
	for (int i = 0; i < numElements; i++, n--)
		a[n] = temp[n];
}