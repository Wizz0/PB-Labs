//A2

//#define NDEBUG
#include<cassert>
#include <vector>

using namespace std;

vector<vector<char>> solve (int n, int m){
    vector<vector<char>> a(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<=m; j++){
        if (((i+j)%2==0) or (i+j==0)){
            a[i][j]='b';
        }
        else a[i][j]='w';
        }
    }
    return a;
}

//main отвечает за ввод-вывод
int main()
{
    //Dulustan's tests
    {
        vector<vector<char>> outp; 

        outp = {{'b','w'}};
        assert(solve(1,2) == outp );

        outp = {{'b'},{'w'},{'b'},{'w'},{'b'}};
        assert(solve(5,1) == outp);

        outp = {{'b','w','b','w'}, {'w','b','w','b'}, {'b','w','b','w'}};
        assert(solve(3,4) == outp);

        outp = {{'b','w','b'}, {'w','b','w'}, {'b','w','b'}, {'w','b','w'}, {'b','w','b'}, {'w','b','w'}};
        assert(solve(6,3) == outp);    
    }

    //доделайте эти тесты
    //Student's tests
    {
        vector<vector<char>> outp; 
         outp = {{'b', 'w', 'b', 'w', 'b', 'w', 'b', 'w'}, {'w','b','w','b','w','b','w','b'}, {'b', 'w', 'b', 'w', 'b', 'w', 'b', 'w'}, {'w','b','w','b','w','b','w','b'}, {'b', 'w', 'b', 'w', 'b', 'w', 'b', 'w'}, {'w','b','w','b','w','b','w','b'}, {'b', 'w', 'b', 'w', 'b', 'w', 'b', 'w'}, {'w','b','w','b','w','b','w','b'}};
         assert(solve(8,8) == outp);

         outp = {{'b','w','b','w','b','w','b','w','b','w','b'}, {'w','b','w','b','w','b','w','b','w','b','w'}, {'b','w','b','w','b','w','b','w','b','w','b'}, {'w','b','w','b','w','b','w','b','w','b','w'}, {'b','w','b','w','b','w','b','w','b','w','b'}};
         assert(solve(5,11) == outp);    

         outp = {{'b','w','b','w'}, {'w','b','w','b'}, {'b','w','b','w'}, {'w','b','w','b'}, {'b','w','b','w'}, {'w','b','w','b'}, {'b','w','b','w'}, {'w','b','w','b'}, {'b','w','b','w'}, {'w','b','w','b'}};
         assert(solve(10,4) == outp);      
    }
}
