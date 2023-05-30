//B2

#include <iostream>
using namespace std;

void convert(int n) {
    if (n == 0) {
        return;
    }
    convert(n / 16);
    int x = n % 16;
    if (x < 10) {
        cout << x;
    }
    else {
        cout << (char)('A' + x - 10);
    }
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    cout << "0x";
    convert(n);
    cout << endl;
    return 0;
}
