//B1

//Известна длина окружности. Найти площадь круга, ограниченного этой окружностью.

#include <iostream>

using namespace std;

int main()
{
    double L;
    cout << "L = ";
    cin >> L; //ввести длину окружности
    cout << "S = " << L*L/(4*3.14); //формула площади круга
    
    return 0;
}
