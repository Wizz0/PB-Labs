//4

#include <iostream>
using namespace std;

int main(){
    setlocale (LC_ALL, "ru");
    int n;
    cin >> n;
    if (n < 1 or n>100) {
        cout << "ERROR";
    }
    else if (n>=10 and n<=20){
        cout << "Вам " << n << " лет";
    }
    else if (n%10 == 1){
        cout << "Вам " << n << " год";
    }
    else if (n%10==2 or n%10==3 or n%10==4){
        cout << "Вам " << n << " года";
    }
    else if (n%10==5 or n%10==6 or n%10==7 or n%10==8 or n%10==9 or n%10==0){
        cout << "Вам " << n << " лет";
    }
}
