#include<iostream>
#define N 7 // �迭�� ũ��
int tmp[N];//������ ���� �ӽù迭
using namespace std;
void ArrayMerge(int start, int end, int* arr)//�� �迭�� �����Լ�
{
	int mid = (start + end) / 2;//ù��° �迭�� �� �ε���

	int i = start; //ù��° �迭�� ���� �ε���
	int j = mid + 1;//�ι�° �迭�� ���� �ε���

	int k = start; //�ӽù迭�� ���� �ε���
	while (i <= mid && j <= end)//�� �迭�� ���� �̸������ �ݺ�
	{
		if (arr[i] <= arr[j]) //ù��° �迭�� ���Ұ� �ι�° �迭 ���Һ��� �� �۰ų� ������
		{
			tmp[k] = arr[i]; //�ӽù迭�� ù��° �迭 ���� �߰�
			i++; //ù��° �迭 ���� �ε��� +1
		}
		else//�ι�° �迭�� ���Ұ� �� �۰ų� ������
		{
			tmp[k] = arr[j]; //�ӽù迭�� �ι�° �迭 ���� �߰�
			j++;//�ι�° �迭 ���� �ε��� +1
		}
		k++; //�ӽù迭�� ���� �ε��� +1	
	}

	//�� �迭�� ���ϰ� ���� ���ҵ��� �ӽù迭�� �߰�
	int t;      //�߰��� ���Ұ� ���� �迭�� ���� �ε���
	if (i > mid) //ù��° �迭�� ���Ұ� ��� �߰��Ǿ�����
		t = j; //���� �ε����� �ι�° �迭�� ���� �ε����� ����
	else       //�ι�° �迭�� ���Ұ� ��� �߰��Ǿ�����
		t = i;//���� �ε����� ù��° �迭�� ���� �ε����� ����

	//���� ���ҵ��� �ӽù迭�� �߰�
	for (k; k <= end; k++, t++)
		tmp[k] = arr[t];
	//�ӽù迭���� ���� �迭�� ����
	for (k = 0; k <= end; k++)
		arr[k] = tmp[k];

}
void MergeSort(int start, int end, int*arr)
{
	int mid;
	if (start < end)
	{
		mid = (start + end) / 2; //�迭�� �߰� �ε���
		MergeSort(start, mid, arr);//���� �迭 ����
		MergeSort(mid + 1, end, arr);//�����ʹ迭 ����
		ArrayMerge(start, end, arr);//����
	}
}
/*
void main()
{
	int arr[] = { 10, 40, 1, 5, 22, 45, 65 };
	//�����迭 ����

	//�����迭 ���
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	//�������� ����
	MergeSort(0, N - 1, arr);
	cout <<" \n----------------\n";
	//���� �� �迭 ���
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	char c = getchar();
	return;
}*/