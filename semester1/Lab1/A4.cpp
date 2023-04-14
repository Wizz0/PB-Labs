//A4

//Составить программу вычисления для заданного трехзначного
//целого числа произведения его цифр.

#include <iostream>
using namespace std;

int main()
{
    int a, n1, n2, n3;
    cout << "Enter the number: ";
    cin >> a; //ввести число
    n1 = a / 100; //первая цифра
    n2 = a % 100 / 10; //вторая цифра
    n3 = a % 100 % 10; //третья цифра
    cout << n1*n2*n3;

    return 0;
}
