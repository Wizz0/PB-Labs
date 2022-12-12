//A1

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
//#include <vector>

using namespace std;

int solve(vector<int> A)
{
    int res = 0;
    if (A.size() == 1) {
            res = 0;
        }
    for (int i=1; i < A.size(); i++){
        if (A[i] > A[i-1]){
            res++;
        }
    }  
    return res;
}


TEST_CASE("Dulustan's tests"){
    CHECK(solve({100000}) == 0);
    CHECK(solve({1,4,7,100}) == 3);
    CHECK(solve({-100,99,88,55}) == 1);
    CHECK(solve({1,-2,3,-4,5,-6,7,-7,8,-8,9,-9}) == 5);
}

TEST_CASE("Student's tests"){
    CHECK(solve({1}) == 0);
    CHECK(solve({1,1,1,1}) == 0);
    CHECK(solve({100,101,102,100}) == 2);
    CHECK(solve({0,-1,2,-3,4,-5,6,-7,8}) == 4);    
}

/*
int main()
{
    int n = 4;
    for (int i=0; i < n; i++){
        vector <int> A;
        cin >> A;
        solve({A});
    }
    
}
*/
