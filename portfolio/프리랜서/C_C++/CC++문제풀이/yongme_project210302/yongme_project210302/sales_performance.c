
#pragma warning(disable : 4996)
#include<stdio.h>
#define x 10
#define true 1
#define false 0
int main(void) {
	char name[7][10] = { "KIM","LEE","PARK","SONG","CHOI","�б�����","�б����"};// print �� ���ڿ� ���� �Դϴ�.
	char graph_arr[10][5] = { ' ', };
	int sale[7][5]; // �� �Ǹ� ���� �����Ͱ� ����� �迭 �Դϴ�.
	int total = 0,max=-1;
	int quarte[4], graph[4];
	int tf = false, graph1 = 0, graph2 = 0, graph3 = 0, graph4 = 0;
	double average1 = 0, average2 = 0, average3 = 0, average4 = 0, average5 = 0;
	for (int i = 0; i < 5; i++) {
		printf("%s�� �ǸŽ����� �Է��ϼ���(1/4, 2/4, 3/4, 4/4)", name[i]);
		for (int j = 0; j < 4; j++) {
			scanf("%d", &sale[i][j]);
			total += sale[i][j];
		}
		sale[i][4]= total;
		total = 0;
	}
	sale[5][0] = sale[0][0] + sale[1][0] + sale[2][0] + sale[3][0] + sale[4][0];// 1�б� ����
	sale[5][1] = sale[0][1] + sale[1][1] + sale[2][1] + sale[3][1] + sale[4][1];// 2�б� ����
	sale[5][2] = sale[0][2] + sale[1][2] + sale[2][2] + sale[3][2] + sale[4][2];// 3�б� ����
	sale[5][3] = sale[0][3] + sale[1][3] + sale[2][3] + sale[3][3] + sale[4][3];// 4�б� ����
	sale[5][4] = sale[0][4] + sale[1][4] + sale[2][4] + sale[3][4] + sale[4][4];//  ����
	printf("�Ǹ� ���� ����\n");
	printf("============================================================\n");
	printf("�ǸŻ��  1/4�б�  2/4�б�  3/4�б�  4/4�б�  ����\n");
	printf("============================================================\n");
	for (int i = 0; i < 6; i++) {
		printf("%s       ",name[i]);
		for (int j = 0; j < 5; j++) {
			printf("%-d    ",sale[i][j]);
		}
		printf("\n");
	}
	average1 = (sale[5][0] / 5);
	average2 = (sale[5][1] / 5);
	average3 = (sale[5][2] / 5);
	average4 = (sale[5][3] / 5);
	average5 = (sale[5][4] / 5);

	printf("============================================================\n");
	printf("%s       ", name[6]);
	printf("%0.2f    %0.2f    %0.2f    %0.2f    %0.2f\n",average1, average2, average3, average4, average5); // �б� ��� 
	printf("============================================================\n");
	printf("�Ǹ� ���� �׷���\n"); // �׷��� ũ�� = ((�б⺰ ���*100)/�����)/10
	printf("-----------------------------------------------------\n");
	quarte[0] = (((sale[5][0] / 5) * 100) / (sale[5][4] / 5)) / 10; // 1 �б� �׷��� ũ��
	quarte[1] = (((sale[5][1] / 5) * 100) / (sale[5][4] / 5)) / 10; // 2 �б� �׷��� ũ��
	quarte[2] = (((sale[5][2] / 5) * 100) / (sale[5][4] / 5)) / 10; // 3 �б� �׷��� ũ��
	quarte[3] = (((sale[5][3] / 5) * 100) / (sale[5][4] / 5)) / 10; // 4 �б� �׷��� ũ��
	for (int i = 0; i < 10; i++) {
		graph_arr[i][0]='I';
		for (int j = 0; j < 5; j++) {
			if ((x - quarte[0]) <= i) {
				if (j == 0) {
					graph_arr[i][1] = '*';
				}
			}
			if ((x - quarte[1]) <= i) {
				if (j == 1) {
					graph_arr[i][2] = '*';
				}
			}
			if ((x - quarte[2]) <= i) { 
				if (j == 2) {
					graph_arr[i][3] = '*';
				}
			}
			if ((x - quarte[3]) <= i) {
				if (j == 3) {
					graph_arr[i][4] = '*';
				}
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			
			if ((x - quarte[0]) <= i) {
				if (j == 0) {
					if (graph_arr[i][0] == 'I') {
						printf("%c", graph_arr[i][j]);
					}
				}
				if (j == 1) {
					if (graph_arr[i][1] == '*') {
						printf("             ");
							printf("%c", graph_arr[i][j]);
							printf("         ");
					}
				}
			}
			else {
			}
			if ((x - quarte[1]) <= i) {
				if (j == 2) {
					if (graph_arr[i][2] == '*') {
							printf("%c", graph_arr[i][j]);
							printf("         ");
					}
				}
			}
			else {

			}
			if ((x - quarte[2]) <= i) {
				if (j == 3) {
					if (graph_arr[i][3] == '*') {
							printf("%c", graph_arr[i][j]);
							printf("         ");
					}
				}
			}
			else {

			}
			if ((x - quarte[3]) <= i) {
				if (j == 4) {
					if (graph_arr[i][4] == '*') {
							printf("%c", graph_arr[i][j]);
							printf("         ");
					}
				}
			}
			else {
				printf("%c", graph_arr[i][j]);
			}
		}
		printf("\n");
	}                                  
	printf("\n-----------------------------------------------------\n");
	printf("           1/4�б�  2/4�б�  3/4�б�  4/4�б�         \n");
	return 0;
}