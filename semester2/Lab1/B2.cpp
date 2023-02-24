//B2

//#define NDEBUG
#include<cassert>
#include <iostream>
#include <vector>

using namespace std;

int solve(vector<vector<int>> inp){
    int n = inp.size();
    int maxI = 0;
    int minJ = 0;
    int max = inp[0][0];
    int min = inp[0][0];
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (inp[i][j] > max) {
                max = inp[i][j];
                maxI = i;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        if (inp[maxI][j] < min) {
            min = inp[maxI][j];
            minJ = j;
        }
    }

    for (int i = 0; i < n; i++) {
        res += inp[maxI][i] * inp[i][minJ];
    }
    return res;
}

int main()
{
    /*
    vector<vector<int>> inp;
    inp = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout << solve(inp) << endl;
    inp = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
    cout << solve(inp) << endl;
    */

    //Dulustan's tests
    {
        vector<vector<int>> inp;
    
        inp = {{1,2,3}, {4,5,6}, {7,8,9}};
        assert(solve(inp) == 102);
    
        inp = {{1,2}, {3,4}};
        assert(solve(inp) == 15);

        inp = {{6,-10,8,22},{100,0,0,0}, {11,17,7,91},{31,32,33,34}};
        assert(solve(inp) ==  -1000);
}

    //придумайте по одному тесту 4x4 и 6x6
    //Student's tests
    {
        vector<vector<int>> inp;
    
        inp = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        assert(solve(inp) == 426);

        inp = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
        assert(solve(inp) == 3321);
        
        cout << "SUCCESS";
    }
}