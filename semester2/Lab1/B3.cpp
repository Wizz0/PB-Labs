//B3

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<vector<char>> res(n, vector<char>(n));
    int xx; cin >> xx;
    int yy; cin >> yy;
    int x = xx -1;
    int y = yy - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == x && j == y) {
                res[i][j] = 'K';
            }
            else if (abs(i - x) == 2 && abs(j - y) == 1 || abs(i - x) == 1 && abs(j - y) == 2) {
                res[i][j] = '*';
            }
            else {
                res[i][j] = '.';
            }
        }
    }
    for (int i=0; i < n; i++){
        for (int j=0; j<n; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}