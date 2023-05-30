//B1

#include <iostream>

using namespace std;

int akerman(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    else if (m > 0 && n == 0) {
        return akerman(m - 1, 1);
    }
    else {
        return akerman(m - 1, akerman(m, n - 1));
    }
}

int main() {
    int m, n;
    cout << "m: ";
    cin >> m;
    cout << "n: ";
    cin >> n;
    cout << akerman(m, n) << endl;
    return 0;
}
