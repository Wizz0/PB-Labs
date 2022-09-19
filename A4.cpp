//A4

#include <iostream>
using namespace std;

int main()
{
    int a, n1, n2, n3;
    cin >> a;
    n1 = a / 100;
    n2 = a % 100 / 10;
    n3 = a % 100 % 10;
    cout << n1*n2*n3;
}

