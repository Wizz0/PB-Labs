//B4

//#define NDEBUG
#include<cassert>
#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> solve(vector<vector<int>> inp){
    int n = inp.size();
    vector<vector<int>> res(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[n-1-j][i] = inp[i][j];
        }
    }
    return res;
}

//main отвечает за ввод-вывод
int main()
{
//    vector<vector<int>> inp, outp;
//    inp = {{1,2}, {3,4}};
//    int n = inp.size();
//    outp = solve(inp);
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            cout << outp[i][j] << ' ';
//        }
//        cout << endl;
//    }
    //Dulustan's tests
    {
        vector<vector<int>> inp, outp; 
        inp = {{1,2}, {3, 4}};
        outp = {{2,4}, {1,3}};
        assert(solve(inp) == outp);

        inp = {{6,6,6}, {9,9,9},{1,2,3}};
        outp = {{6,9,3}, {6,9,2},{6,9,1}};
        assert(solve(inp) == outp);

        inp = {{11,12,13,14},{15,16,17,18},{19,20,21,22},{23,24,25,26}};
        outp = {{14,18,22,26},{13,17,21,25},{12,16,20,24},{11,15,19,23}};
        assert(solve(inp) ==  outp);
    }

    //придумайте по одному тесту 5x5 и 6x6
    //Student's tests
    {
        vector<vector<int>> inp, outp;
        inp = {{10,20,30,40,50},{11,21,31,41,51},{12,22,32,42,52},{13,23,33,43,53},{14,24,34,44,54}};
        outp = {{50,51,52,53,54},{40,41,42,43,44},{30,31,32,33,34},{20,21,22,23,24},{10,11,12,13,14}};
        assert(solve(inp) == outp);
        
        inp = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
        outp = {{6,12,18,24,30,36},{5,11,17,23,29,35},{4,10,16,22,28,34},{3,9,15,21,27,33},{2,8,14,20,26,32},{1,7,13,19,25,31}};
        assert(solve(inp) == outp);
        
        cout << "SUCCESS";
    }
}
