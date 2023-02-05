//B2

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
