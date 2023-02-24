//A4

//#define NDEBUG
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> solve (vector<vector<int>> inp){
    int n = inp.size();
    int m = inp[0].size();
    int max;
    int min;
    for(int j=0; j<m; j++){
        min = inp[0][j];
        for(int i=1; i<n; i++){
            if (inp[i][j] < min)
                min = inp[i][j];
        }
        for (int i=0; i<n; i++){
            if (inp[i][j] == min)
                inp[i][j] = min - 1;
        }
    }
    for (int i=0; i<n; i++){
        max = inp[i][0];
        for (int j=1; j<m; j++){
            if (inp[i][j] > max)
                max = inp[i][j];
        }
        for (int j=0; j<m; j++){
            if (inp[i][j] == max)
                inp[i][j] = max * 2;
        }
    }
    return inp;
}



//main отвечает за ввод-вывод
int main()
{
    /*
    vector<vector<int>> inp, outp;
    inp = {{1,2,3,4,5},{6,7,8,9,10},{1,21,0,-3,9}}; 
    int n = inp.size();
    int m = inp[0].size();
    outp = solve(inp);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << outp[i][j] << " ";
        }
        cout << endl;
    }
    */
    //Dulustan's tests
    {
        
        vector<vector<int>> inp, outp; 
        
        inp = {{5,5,4,-1}, {6,0,7,2}, {0,-10,-2,-1}};
        outp = {{10,10,4,-2}, {6,0,14,2}, {-2,-11,-3,-2}};
        assert(solve(inp) == outp);

        inp = {{10,10,10},{10,10,10}, {10,10,10}};
        outp = {{18,18,18},{18,18,18}, {18,18,18}};
        assert(solve(inp) == outp);

        inp = {{1,2,3,4,5},{6,7,8,9,10}};
        outp = {{0,1,2,3,8},{6,7,8,9,20}};
        assert(solve(inp) == outp);
    }

    //придумайте три хороших теста
    //Student's tests
    {
        vector<vector<int>> inp, outp;
        
        inp = {{0,0,0,0}, {1,1,1,1}, {2,2,2,2}};
        outp = {{-2,-2,-2,-2}, {2,2,2,2}, {4,4,4,4}};
        assert(solve(inp) == outp);
        
        inp = {{10,-5,2,1},{0,11,2,3}};
        outp = {{20,-6,1,0},{-1,22,1,3}};
        assert(solve(inp) == outp);
        
        inp = {{1,2,3,4,5},{6,7,8,9,10},{1,21,0,-3,9}};
        outp = {{0,1,3,8,8}, {6,7,8,9,20}, {0,42,-1,-4,9}};
        assert(solve(inp) == outp);
        
        cout << "SUCCESS";
    }
}