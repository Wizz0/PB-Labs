//B2

//Дано действительные числа x, y. Не пользуясь никакими другими арифметическими
//операциями, кроме умножения, сложения и вычитания, вычислить
//5x2y2 − 3xy2 − 17x2y − 2y2 + 5xy + 2x2 − 4x + 11y + 7 Разрешается использовать
//не более восьми умножений и восьми сложений и вычитаний.
    
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << 7+y*(11-2*y+x*(5-17*x-y*(3-5*x)))-2*x*(2-x) << endl;
    cout << 5*x*x*y*y - 3*x*y*y - 17*x*x*y - 2*y*y + 5*x*y + 2*x*x - 4*x + 11*y + 7;
    
    return 0;
}
