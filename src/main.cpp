#include <iostream>
#include <string>
#include "include/quadrocopter.h"

using namespace std;


int main() {
    cout << "It`s work" << endl;
    Quadrocopter qt1;
    int work = 1;
    char pause;
    int choice;
    while(work){
        system("clear");
        cout << "Меню управлением квадрокоптером:" << endl;
        cout << "1) Узнать объем заряда" << endl;     
        cout << "0) Выход из программы" << endl;
        cin >> choice;
        switch(choice){
            case 1:
                system("clear");
                cout << "Заряд квадрокоптера: " << to_string(qt1.checkBatteryCapacity()) << endl;
                cout << "Назад" << endl;
                system("read");
                break;
            case 0:
                cout << "Выход из программы" << endl;
                work = 0;
                break;
            default:
                cout << "Ошибка ввода. Повторите ввод." << endl;
                system("read");
                break;
        }
    }
    return 0;
}