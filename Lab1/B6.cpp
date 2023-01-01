//B6
//Дана сторона равностороннего треугольника. Найти площадь этого треугольника, его высоты,
//радиусы вписанной и описанной окружности.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, h, r, R;
    cout<<"a = ";
    cin >> a;
    h = sqrt(a*a - a*a/4);
    cout << "h = " << h << endl;
    cout << "S = " << a * h/2 << endl;
    cout << "r = " << a*sqrt(3)/6 << endl;
    cout << "R = " << a/sqrt(3);
    return 0;
}
