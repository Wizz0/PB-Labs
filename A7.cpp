//A7

#include <iostream>

using namespace std;

int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cout << "A(x y)" << endl;
    cin >> x1 >> y1;
    cout << "B(x y)" << endl;
    cin >> x2 >> y2;
    cout << "C(x y)" << endl;
    cin >> x3 >> y3;
    x4 = x3 - (x2 - x1);
    y4 = y1 - (y2 - y3);
    cout << "D(" << x4 << " " << y4 << ")";
}
