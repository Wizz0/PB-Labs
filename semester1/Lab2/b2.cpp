//B2

//Напишите программу, которая принимает три вещественных числа a, b, c. В случае, если
//существует треугольник с такими длинами сторон, то программа выводит 1, 2, или 3, если
//треугольник является прямоугольным, тупоугольным, или остроугольным, соответственно.
//Если же треугольника с такими длинами сторон не существует, программа должна вывести 0

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    if ((c >= (a+b)) or (a >= (b+c)) or (b >= (c+a))){
        cout << "0";
    }
    else if ((c == sqrt(a*a+b*b)) or (a == sqrt(c*c+b*b) or (b == sqrt(c*c+a*a)))){
        cout << "1";
    }
    else if ((c > sqrt(a*a+b*b)) or (a > sqrt(c*c+b*b) or (b > sqrt(c*c+a*a)))){
        cout << "2";
    }
    else if ((c < sqrt(a*a+b*b)) or (a < sqrt(c*c+b*b) or (b < sqrt(c*c+a*a)))){
        cout << "3";
    }
    return 0;
}
