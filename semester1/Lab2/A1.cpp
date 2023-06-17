//A1

//Напишите программу, которая вводит с клавиатуры одно целое число, и выводит POL,
//если оно положительно, OTR — если отрицательно, и NUL, если это нуль.

#include <iostream>
using namespace std;

int main() {
    int x; cin >> x;
    if (x > 0)
        cout << "POL";
    else if (x < 0)
        cout << "OTR";
    else
        cout << "NUL";
    
    return 0;
}
