//A1

//#define NDEBUG
#include<cassert>
#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> solve (int n, int m){
    vector<vector<int>> a(n, vector<int>(m));
    int x=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
        x++;
        a[j][i] = x;
        //cout << a[i][j] << endl;
        }
    }
    return a;
}

//main отвечает за ввод-вывод
int main()
{
    //solve(6,3);

    //Dulustan's tests
    {
        vector<vector<int>> outp; 
        
        outp = {{1,2}};
        assert(solve(1,2) == outp );

        outp = {{1},{2},{3},{4},{5}};
        assert(solve(5,1) == outp);

        outp = {{1,4,7,10}, {2,5,8,11}, {3,6,9,12}};
        assert(solve(3,4) == outp);

        outp = {{1,7,13}, {2,8,14}, {3,9,15}, {4,10,16}, {5,11,17}, {6,12,18}};
        assert(solve(6,3) == outp);    
    }

    //доделайте эти тесты
    //Student's tests
    {
        vector<vector<int>> outp; 
        
         outp = {{1,9,17,25,33,41,49,57}, {2,10,18,26,34,42,50,58}, {3,11,19,27,35,43,51,59}, {4,12,20,28,36,44,52,60}, {5,13,21,29,37,45,53,61}, {6,14,22,30,38,46,54,62}, {7,15,23,31,39,47,55,63}, {8,16,24,32,40,48,56,64}};
         assert(solve(8,8) == outp);

         outp = {{1,6,11,16,21,26,31,36,41,46,51}, {2,7,12,17,22,27,32,37,42,47,52}, {3,8,13,18,23,28,33,38,43,48,53}, {4,9,14,19,24,29,34,39,44,49,54}, {5,10,15,20,25,30,35,40,45,50,55}};
         assert(solve(5,11) == outp);    

         outp = {{1,11,21,31}, {2,12,22,32}, {3,13,23,33}, {4,14,24,34}, {5,15,25,35}, {6,16,26,36}, {7,17,27,37}, {8,18,28,38}, {9,19,29,39}, {10,20,30,40}};
         assert(solve(10,4) == outp);      
    }
}