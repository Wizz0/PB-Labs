//B3

#include <iostream>
using namespace std;

long long square_sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n * n + square_sum(n - 1);
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;
    cout << square_sum(n) << endl;
    return 0;
}
