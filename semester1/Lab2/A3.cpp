//A3

//Введите с клавиатуры год в интервале от 1582 до 2200, выведите LEAP, если он високосный,
//или NORMAL, если нет. Выведите ERROR, если но- мер года больше 2200 или меньше 1582
//(К примеру, 2019 год — не високосный, 2020 — високосный, 1900 и 2100 —не високосные,
//2000 — високосный.)

#include <iostream>
using namespace std;

int main (){
    int y;
    cout << "Enter the year of 1582 to 2200" << endl;
    cin >> y;
    if (y>2200 or y<1582){
        cout << "ERROR";
    }
    else if (y%4 == 0 and (y%100 != 0 or y%400 == 0)){
        cout << "LEAP";
    }
    else if (y%4 != 0 or (y%100 == 0 and y%400 != 0)){
        cout << "NORMAL";
    }
}
