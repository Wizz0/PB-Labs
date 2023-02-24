//#define NDEBUG
#include<cassert>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> solve (int n, int m){
    vector<vector<int>> a(n, vector<int>(m));
    int k=0;
    for (int k=0; k<m/2+1; k++){
        for (int i=k; i<n-k; i++){
            for (int j=k; j<m-k; j++){
                a[i][j] = k;
            }
        }
    }
    return a;
}

//main отвечает за ввод-вывод
int main()
{
    /*
    int n; cin >> n;
    int m; cin >> m;
    vector<vector<int>> v(n, vector<int>(m)); 
    v = solve(n,m);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    */
    
    //Dulustan's tests
    {
        vector<vector<int>> outp; 
        
        outp = {{0,0,0,0}};
        assert(solve(1,4) == outp);

        outp = {{0,0,0},{0,1,0},{0,1,0},{0,1,0},{0,0,0}};
        assert(solve(5,3) == outp);

        outp = {{0,0,0,0,0,0}, {0,1,1,1,1,0}, {0,1,2,2,1,0},
        {0,1,2,2,1,0}, {0,1,1,1,1,0}, {0,0,0,0,0,0}};
        assert(solve(6,6) == outp);
    }

    //доделайте эти тесты
    //Student's tests
    {
         vector<vector<int>> outp; 
         
         outp = {{0,0,0,0,0,0,0,0}, {0,1,1,1,1,1,1,0}, {0,1,2,2,2,2,1,0}, {0,1,2,3,3,2,1,0},
         {0,1,2,3,3,2,1,0}, {0,1,2,2,2,2,1,0}, {0,1,1,1,1,1,1,0}, {0,0,0,0,0,0,0,0}};
         assert(solve(8,8) == outp);

         outp = {{0,0,0,0,0,0,0,0,0,0,0}, {0,1,1,1,1,1,1,1,1,1,0}, {0,1,2,2,2,2,2,2,2,1,0},
         {0,1,2,3,3,3,3,3,2,1,0}, {0,1,2,2,2,2,2,2,2,1,0}, {0,1,1,1,1,1,1,1,1,1,0}, {0,0,0,0,0,0,0,0,0,0,0}};
         assert(solve(7,11) == outp);    

         outp = {{0,0,0,0,0,0,0,0,0,0,0,0}, {0,1,1,1,1,1,1,1,1,1,1,0}, {0,1,2,2,2,2,2,2,2,2,1,0},
         {0,1,2,3,3,3,3,3,3,2,1,0}, {0,1,2,3,4,4,4,4,3,2,1,0}, {0,1,2,3,4,4,4,4,3,2,1,0},
         {0,1,2,3,3,3,3,3,3,2,1,0},{0,1,2,2,2,2,2,2,2,2,1,0}, {0,1,1,1,1,1,1,1,1,1,1,0},
         {0,0,0,0,0,0,0,0,0,0,0,0}};
         assert(solve(10,12) == outp);
         
         cout << "SUCCESS";
    }
}