//B1

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void solve(vector<int> &v)
{
    int max = 0;
    int min = 0;
    for (int i=0; i < v.size(); i++){
        if (v[i] > max){
            max = v[i];
        }
        else if (v[i] < min){
            min = v[i];
        }
    }
    vector<int> w;
    
    for (int i=0; i < v.size(); i++){
        if ((abs(min-v[i])<=1) or (abs(max-v[i])<=1)){
            w.push_back(v[i]);
        }
    }
    v = w;
}


TEST_CASE("Dulustan's tests"){
    vector<int> v;
    
    v = {1,2,3,4,5};
    solve(v);
    CHECK(v == vector<int>{1,2,4,5});    
    
    v = {6,4,6,7,0,1,0,3};
    solve(v);
    CHECK(v == vector<int>{6,6,7,0,1,0});    

    v = {-1,0,-5,-9,-2,-10,-6,-9};
    solve(v);
    CHECK(v == vector<int>{-1,0,-9,-10,-9});  

    v = {777,776,778,7,7,8};
    solve(v);
    CHECK(v == vector<int>{777,778,7,7,8});  
}

//??????? 4 ?????
TEST_CASE("Student's tests"){
    vector<int> v;
}


// main ???????? ?? ????-?????
//int main()
//{

//}
