//A7

//На плоскости заданы координаты трех вершин квадрата ABCD: вершин A(x1, y1), B(x2, y2),
//C(x3, y3), в порядке обхода по часовой стрелке. Найти координаты четвертой вершины
//D(x4, y4).

#include <iostream>

using namespace std;

int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cout << "A(x y)" << endl;
    cin >> x1 >> y1; //ввести координаты A
    cout << "B(x y)" << endl;
    cin >> x2 >> y2; //ввести координаты B
    cout << "C(x y)" << endl;
    cin >> x3 >> y3; //ввести координаты C
    x4 = x3 - (x2 - x1); //x точки D
    y4 = y1 - (y2 - y3); //y точки D
    cout << "D(" << x4 << " " << y4 << ")"; //вывод координат D
    
    return 0;
}
