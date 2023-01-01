//A3
//В квадрат вписана окружность. Определите площадь заштрихованной части фигуры, если
//известен радиус окружности R.

#include <iostream>
using namespace std;

int main()
{
    double R, x, S, y;
    cout << "radius = ";
    cin >> R;
    x=R*R;
    S=R*2*R*2;
    y=S-3.14*R*R;
    y=y/4;
    cout << x+y;
}
