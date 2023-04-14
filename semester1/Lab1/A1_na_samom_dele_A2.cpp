//A1

//Угол A задан в градусах. Найти его величину в радианах.

#include <iostream>
using namespace std;

int main (){
    cout << "Enter the angle A in degrees: "; //ввести угол А
    double A; cin >> A;
    A*=3.14/180; //формула pi/180'
    cout << "The ange A in radians: " << A;
    
    return 0;
}
