/*
#include<iostream>
using namespace std;

class PrintMachine {
    string model, manuf;
    int pcount, avlcount;
protected:
    PrintMachine(string model, string manuf, int avlcount) {
        this->model = model;
        this->manuf = manuf;
        this->avlcount = avlcount;
    }
    bool print(int pages) {
        if (avlcount < pages) {
            cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            avlcount--;
        }
        return true;
    }
    string get_model() { return model; }

    string get_manuf() { return manuf; }
    int get_avlcount() { return avlcount; }
};

class PrintInkJet : public PrintMachine {
    int avlink;
public:
    PrintInkJet(string model, string manuf, int avlcount, int avlink) : PrintMachine(model, manuf, avlcount) {
        this->avlink = avlink;
    }
    bool printInkJet(int pages) {
        if (print(pages));
        else return false;
        if (avlink < pages) {
            cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            avlink--;
        }
        return true;
    }
    void show() {
        cout << get_model() << "\t," << get_manuf() << "\t,���� ���� " << get_avlcount() << "��\t,���� ��ũ " << avlink << endl;
    }
};

class PrintLaser : public PrintMachine {
    int avltoner;
public:
    PrintLaser(string model, string manuf, int avlcount, int avltoner) : PrintMachine(model, manuf, avlcount) {
        this->avltoner = avltoner;
    }
    bool printLaser(int pages) {
        if (print(pages));
        else return false;
        if (avltoner < pages) {
            cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        for (int i = 0; i < pages; i++)
            avltoner--;
        return true;
    }
    void show() {
        cout << get_model() << " ," << get_manuf() << "\t,���� ���� " << get_avlcount() << "��\t,������� " << avltoner << endl;
    }
};

int main() {
    int pnum, pages;
    char yon;
    PrintInkJet* inkjet = new PrintInkJet("LG V50", "LG",100, 10);
    PrintLaser* laser = new PrintLaser("������S21", "�Ｚ����",300,40);
    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����\n";
    cout << "��ũ�� : ";
    inkjet->show();
    cout << "������ : ";
    laser->show();
    cout << endl;

    while (true) {
        cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
        cin >> pnum >> pages;
            switch(pnum){
            case 1:
                if(inkjet->printInkJet(pages))
                    cout << "����Ʈ �Ͽ����ϴ�.\n";
                break;
            case 2:
                if(laser->printLaser(pages))
                    cout << "����Ʈ �Ͽ����ϴ�.\n";
                break;
            default :
                cout << "�����͸� �߸� �����ϼ̽��ϴ�.\n";
                break;
        }
        inkjet->show();
        laser->show();
        while (true) {
            cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
            cin >> yon;
            cout << endl;
            if (yon == 'n')
                return 0;
            else if (yon == 'y')
                break;
            else
                cout << "�߸� �Է��ϼ̽��ϴ�.\n";
        }
    }
    delete inkjet;
    delete laser;
}
*/