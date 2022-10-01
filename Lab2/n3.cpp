//3

#include <iostream>
using namespace std;

int main (){
    int y;
    cout << "Enter the year of 1582 to 2200" << endl;
    cin >> y;
    if (y>2200 or y<1582){
        cout << "ERROR";
    }
    else if (y%4 == 0 and (y%100 != 0 or y%400 == 0)){
        cout << "LEAP";
    }
    else if (y%4 != 0 or (y%100 == 0 and y%400 != 0)){
        cout << "NORMAL";
    }
}
