//2

#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    if (x>='0' and x<='9') {
        cout << "DIGIT";
    }
    else if (x>='A' and x<='Z'){
        cout << "CAPITAL";
    }
    else if (x>='a' and x<='z'){
        cout << "LOWERCASE";
    }
    else {
        cout << "NON-ALPHANUMERIC";
    }
}
