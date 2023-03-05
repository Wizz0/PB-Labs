//B5

#include<iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<char>> res(n, vector<char>(n));
    int xx; cin >> xx;
    int x = xx - 1;
    int yy; cin >> yy;
    int y = yy - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == x && j == y) {
                res[i][j] = 'Q';
            }
            else if (abs(i - x) <= 1 && abs(j - y) <= 1 || abs(i - x) == abs(j - y)) {
                res[i][j] = '*';
            }
            else if (i == x || j == y){
                res[i][j] = '*';
            }
            else {
                res[i][j] = '.';
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}