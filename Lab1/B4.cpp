//B4
//Дано семи- или восьмизначное целое число n. Найти шестую от конца цифру.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    cout << n / 10 / 10 / 10 / 10 / 10 % 10;
    return 0;
}

