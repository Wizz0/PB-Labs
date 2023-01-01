//A2
//Угол A задан в градусах. Найти его величину в радианах.

#include <iostream>
using namespace std;

int main(){
    double H, R, V1, V2;
    cout<<"height = ";
    cin>>H;
    cout<<"radius = ";
    cin>>R;
    V1=3.14*R*R*H;
    V2=(3.14*R*R*H)/2;
    cout << V1 << endl;
    cout << V2;
}
