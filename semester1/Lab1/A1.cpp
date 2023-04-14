//A2

//Составить программу вычисления объема цилиндра и конуса, которые
//имеют одинаковую высоту H и одинаковый радиус основания R.
    
#include <iostream>
using namespace std;

int main(){
    double H, R, V1, V2;
    cout << "Height: "; //ввести высоту
    cin >> H;
    cout << "Radius: "; //ввести радиус
    cin >> R;
    V1 = 3.14 * R * R * H; //объем цилиндра
    V2 = (3.14 * R * R * H) / 3; //объем конуса
    cout << "Cylinder volume: " << V1 << endl;
    cout << "Cone volume: " << V2 << endl;
    
    return 0;
}
