//B1

//#define NDEBUG
#include<cassert>
#include <iostream>
#include <vector>

using namespace std;

int solve(vector<vector<int>>& inp) {
    int n = inp.size();
    int maxLen = 0;

    //по горизонтали
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n;) {
            if (inp[i][j] == 0) {
                int len = 1;
                j++;
                while ((j < n) and (inp[i][j] == 0)) {
                    len++;
                    j++;
                }
                if (len >= maxLen)
                    maxLen = len;
            }
            else {
                j++;
            }
        }
    }

    //по вертикали
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n;) {
            if (inp[i][j] == 0) {
                int len = 1;
                i++;
                while ((i < n) and (inp[i][j] == 0)) {
                    len++;
                    i++;
                }
                if (len >= maxLen)
                    maxLen = len;
            }
            else {
                i++;
            }
        }
    }

    //по главной диагонали
    for (int k = 0; k < n; k++) {
        int i = k, j = 0;
        int len = 0;
        while ((i < n) and (j < n)) {
            if (inp[i][j] == 0) {
                len++;
            }
            else {
                len = 0;
            }
            if (len >= maxLen)
                    maxLen = len;
            i++;
            j++;
        }
    }

    //по побочной диагонали
    for (int k = 0; k < n; k++) {
        int i = k, j = n - 1;
        int len = 0;
        while ((i < n) and (j >= 0)) {
            if (inp[i][j] == 0) {
                len++;
            }
            else {
                len = 0;
            }
            if (len >= maxLen)
                    maxLen = len;
            i++;
            j--;
        }
    }
    
    return maxLen;
}

int main()
{
    //Dulustan's tests
    {
        vector<vector<int>> inp; 
        inp = {{1,-1,1}, {-1,1,-1}, {1,-1,1}};
        assert(solve(inp) == 0);

        inp = {{5,0,0,-1}, {0,0,7,2}, {0,-10,0,-1}, {3,0,13,0}};
        assert(solve(inp) == 3);

        inp = {{10,10,10},{10,0,10}, {10,0,10}};
        assert(solve(inp) ==  2);

        inp = {{1,0,0,2,0},{0,3,0,0,4},{5,6,0,7,8},{9,0,10,11,12},{13,0,0,0,14}};
        assert(solve(inp) == 4 );
    }

    //придумайте по одному тесту 4x4 и 6x6
    //Student's tests
    {
        vector<vector<int>> inp; 
        inp = {{1,0,1,2}, {-1,1,0,0}, {1,0,2,0}, {1,2,0,0}};
        assert(solve(inp) == 3);
        
        inp = {{1,0,0,0,0,0},{0,3,0,0,4,0},{5,6,0,7,8,1},{9,0,10,11,12,2},{13,0,0,0,0,14}, {0,0,1,1,2,3}};
        assert(solve(inp) == 5);
        
        cout << "Tupa genius";
    }
}