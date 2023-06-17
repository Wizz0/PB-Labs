//A5

//Введите с клавиатуры число n и выведите английское название соответствующей
//цифры от 0 до 9 заглавными буквами (ZERO, ONE, ..., NINE), либо ERROR,
//если число меньше 0 или больше 9 Массивы не использовать, if не использовать.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number of 0 to 9: ";
    cin >> n;
    switch (n) {
        case 0:
            cout<<"ZERO";
            break;
        case 1:
            cout <<"ONE";
            break;
        case 2:
            cout <<"TWO";
            break;
        case 3:
            cout <<"THREE";
            break;
        case 4:
            cout <<"FOUR";
            break;
        case 5:
            cout <<"FIVE";
            break;
        case 6:
            cout <<"SIX";
            break;
        case 7:
            cout <<"SEVEN";
            break;
        case 8:
            cout <<"EIGHT";
            break;
        case 9:
            cout <<"NINE";
            break;
        default:
            cout << "ERROR";
    }

    return 0;
}
