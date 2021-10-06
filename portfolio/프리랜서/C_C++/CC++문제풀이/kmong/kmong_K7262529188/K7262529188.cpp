#include<iostream>
#define xmax 4
#define ymax 4
using namespace std;

void init();
void print(char x_arry[][4],int array[][4], int inx);
void Game_start(char x_arry[][4],int array[][4], int inx, int x1, int y1, int x2, int y2,int P);
char Result[4][4] = { {'x','x','x','x'},{'x','x','x','x'},{'x','x','x','x'},{'x','x','x','x'} };
int static_mode[4][4] = { {1,2,3,4},{5,6,7,8},{8,7,6,5},{4,3,2,1} };
int Random_mode[4][4];
int x, y, x2, y2,P1 = 0,P2 = 0,x_count=8;
char card1[3] = { 9 }, card2[3] = { 9 };
int main() {
    int menu=0,game_turns=20;
    bool init_flag = false;
    cout << "choose card generation mode  (1: static 2: Random):";
    cin >> menu;
    while (1) {
        if (menu == 1) {
            print(Result,static_mode, 4);// 출력
            while(1) {
                for (int j = 0; j < 2; j++) {
                    if (j == 0) { // P1
                        while (1) {
                            cout << "P1's turn, choose two cards (" << game_turns << "turns remain):";
                            cin >> card1 >> card2;
                            x = card1[0] - '0';
                            y = card1[1] - '0';
                            x2 = card2[0] - '0';
                            y2 = card2[1] - '0';
                            if (x <= 4 && y <= 4 && x2 <= 4 && y2 <= 4) {
                                game_turns--;
                                break;
                            }
                        }
                        Game_start(Result,static_mode, 4, x,y,x2,y2,j);
                        //cout << endl;
                    }
                    else if (j == 1) { // P2
                        while (1) {// x,y 최대 좌표 를 초과시 재입력을 받기 위한 조건.
                            cout << "P2's turn, choose two cards (" << game_turns << "turns remain):";
                            cin >> card1 >> card2;
                            x = card1[0] - '0';
                            y = card1[1] - '0';
                            x2 = card2[0] - '0';
                            y2 = card2[1] - '0';
                            if (x <= 4 && y <= 4 && x2 <= 4 && y2 <= 4) {
                                game_turns--;
                                break;
                            }
                        }
                        Game_start(Result,static_mode, 4, x, y, x2, y2, j);
                        //cout << endl;
                    }
                }
                if (game_turns == 0) {
                    cout << "Exit all turns your final score P1's score: " << P1 << " P2's score: " << P2 << endl;
                    break;
                }
                if (x_count == 0) {
                    cout << "look for everything your final score  P1's score: " << P1 << " P2's score: " << P2 << endl;
                    break;
                }
            }
            break;
        }
        else if (menu == 2) {
            if (init_flag == false) { //  Random 모드 에서 배열 초기화 진행 
                init();
                init_flag = true;
            }
            print(Result,Random_mode, 4); // 출력
            while (1) {
                for (int j = 0; j < 2; j++) {
                    if (j == 0) { // P1
                        while (1) {
                            cout << "P1's turn, choose two cards (" << game_turns << "turns remain):";
                            cin >> card1 >> card2;
                            x = card1[0] - '0';
                            y = card1[1] - '0';
                            x2 = card2[0] - '0';
                            y2 = card2[1] - '0';
                            if (x <= 4 && y <= 4 && x2 <= 4 && y2 <= 4) {
                                game_turns--;
                                break;
                            }
                        }
                        Game_start(Result, static_mode, 4, x, y, x2, y2, j);
                        //cout << endl;
                    }
                    else if (j == 1) { // P2
                        while (1) {// x,y 최대 좌표 를 초과시 재입력을 받기 위한 조건.
                            cout << "P2's turn, choose two cards (" << game_turns << "turns remain):";
                            cin >> card1 >> card2;
                            x = card1[0] - '0';
                            y = card1[1] - '0';
                            x2 = card2[0] - '0';
                            y2 = card2[1] - '0';
                            if (x <= 4 && y <= 4 && x2 <= 4 && y2 <= 4) {
                                game_turns--;
                                break;
                            }
                        }
                        Game_start(Result, static_mode, 4, x, y, x2, y2, j);
                        //cout << endl;
                    }
                }
                if (game_turns == 0) {
                    cout << "Exit all turns your final score P1's score: " << P1 << " P2's score: " << P2 << endl;
                    break;
                }
                if (x_count == 0) {
                    cout << "look for everything your final score  P1's score: " << P1 << " P2's score: " << P2 << endl;
                    break;
                }
            }
            break;
        }
        else {
            cout << "choose card generation mode  (1: static 2: Random):";
            cin >> menu;
        }
    }
}
void init() {
int temp = 0, index = 0;
int num[8] = { 0, }, result[16] = { 0, };
while (1) {
    temp = rand() % 8 + 1;
    if (num[(temp - 1)] != 2) {
        num[(temp - 1)] = num[(temp - 1)]++;
        result[index++] = temp;
    }
    else {
        temp = rand() % 8 + 1;
    }
    if (index == 15) {
        break;
    }
}index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            Random_mode[i][j] = result[index++];
        }
    }
}
void print(char x_arry[][4],int array[][4],int inx) {
    cout << "    1 2 3 4 \n";
    cout << "--+---------\n";
    for (int i = 0; i < inx; i++) {
        cout << (i + 1) << " | ";
        for (int j = 0; j < 4; j++) {
            cout << x_arry[i][j] << " ";
        }
        cout << endl;
    }
}
void Game_start(char x_arry[][4],int array[][4], int inx, int x1 ,int y1, int x2, int y2, int P) {
    int temp1=0, temp2=99;
    bool card_flag = false;
    cout << "    1 2 3 4 \n";
    cout << "--+---------\n";
    for (int i = 0; i < inx; i++) {
        cout << (i + 1) << " | ";
        for (int j = 0; j < 4; j++) {
            if (i == (x1 - 1) && j == (y1 - 1)) {
                cout << array[i][j] << " ";
                if (x_arry[i][j] != 'x') {
                    card_flag = true;
                   // cout << "Card already found";
                }
                else {
                    temp1 = array[i][j];
                }
            }
            else if (i == (x2 - 1) && j == (y2 - 1)) {
                cout << array[i][j] << " ";
                if (x_arry[i][j] != 'x') {
                    card_flag = true;
                    //cout << "Card already found";
                }
                else {
                    temp2 = array[i][j];
                }
            }
            else {
                cout << x_arry[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    if (card_flag == true) { // 이미 찾은 카드를 다시 선택 하였을 경우 
        cout << "Card already found"<<endl;
        card_flag = false;
    }
    if (temp1 == temp2) {
        x_arry[(x1 - 1)][(y1 - 1)] = temp1 + '0';
        x_arry[(x2 - 1)][(y2 - 1)] = temp2 + '0';
        if (P == 0) {
            if (temp1 == 7) {
                P1 = P1 + 2;
            }
            P1 = P1 + 1;
           // x_count= x_count-1; // 남은 카드의 갯수 (디버깅용 
            //cout << x_count << endl;
        }
        else if (P == 1) {
            if (temp1 == 7) {
                P2 = P2 + 2;
            }
            P2 = P2 + 1;
           // x_count = x_count - 1; // 남은 카드의 갯수 (디버깅용
            //cout << x_count << endl;
        }
    }
    else {
        if (P == 0) {
            cout << "P1 failed to find matching pair;";
        }
        else if (P == 1) {
            cout << "P1 failed to find matching pair;";
        }
        cout << endl;
    }
    if (P1 > 0 || P2 > 0) {
        if (P == 0) {
            cout << "\nP1 found a matching pair ! P1's score: " << P1 << " P2's score: " << P2 << endl;
        }
        else if (P == 1) {
            cout << "\nP2 found a matching pair ! P1's score: " << P1 << " P2's score: " << P2 << endl;
        }
        cout << endl;
    }
}
