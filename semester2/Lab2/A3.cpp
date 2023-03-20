//A3

#define NDEBUG
#include<cassert>
#include<iostream>

const int N = 1000;
using namespace std;

//int solve(int a[][N], int n, int m){
//int solve(int (&a)[N][N], int n, int m){
int solve(int (*a)[N], int n, int m){  //какой из трех ето указатель? ;(
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        if (sum % 2 == 0) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[N][N];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int res = solve(a, n, m);
    cout << res << endl;
}