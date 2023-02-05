//B3

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &a, vector<int> &b)
{
    int temp;
    for (int i=0; i < a.size(); i++){
            if (a[i] >= b[i]){
               temp = a[i];
               a[i] = b[i];
               b[i] = temp;
            }
    }
}

TEST_CASE("Dulustan's tests"){
    vector<int> a, b;

    a = vector<int>{1,2,3,4,5};
    b = vector<int>{5,4,3,2,1};
    solve(a, b);
    CHECK(a == vector<int>({1,2,3,2,1}));
    CHECK(b == vector<int>({5,4,3,4,5}));

    a = vector<int>{-7, 7,  11, -8, 22,  31, -50};
    b = vector<int>{7, -77, 88, 31, -19, 0,  -46};
    solve(a, b);
    CHECK(a == vector<int>({-7, -77, 11, -8, -19, 0, -50}));
    CHECK(b == vector<int>({7,  7,   88, 31, 22, 31, -46}));

    a = vector<int>{789987, 2022};
    b = vector<int>{789789, 2023};
    solve(a, b);
    CHECK(a == vector<int>({789789, 2022}));
    CHECK(b == vector<int>({789987, 2023}));

    a = vector<int>{5,5,5,5,5,5,5,5,5,5,5,2};
    b = vector<int>{4,4,4,4,4,4,4,4,4,4,4,5};
    solve(a, b);
    CHECK(a == vector<int>({4,4,4,4,4,4,4,4,4,4,4,2}));
    CHECK(b == vector<int>({5,5,5,5,5,5,5,5,5,5,5,5}));
}

//минимум 4 теста
TEST_CASE("Student's tests"){
    vector<int> a, b;
    
    a = vector<int>{1,1,1,1,1};
    b = vector<int>{0,0,1,1,0};
    solve(a, b);
    CHECK(a == vector<int>({0,0,1,1,0}));
    CHECK(b == vector<int>({1,1,1,1,1}));
    
    a = vector<int>{11,22,33,44,55};
    b = vector<int>{55,45,35,25,15};
    solve(a, b);
    CHECK(a == vector<int>({11,22,33,25,15}));
    CHECK(b == vector<int>({55,45,35,44,55}));
    
    a = vector<int>{100,22,53,64,125};
    b = vector<int>{54,34,13,20,11};
    solve(a, b);
    CHECK(a == vector<int>({54,22,13,20,11}));
    CHECK(b == vector<int>({100,34,53,64,125}));
    
    a = vector<int>{100,352,13,54,25};
    b = vector<int>{55,46,38,12,21};
    solve(a, b);
    CHECK(a == vector<int>({55,46,13,12,21}));
    CHECK(b == vector<int>({100,352,38,54,25}));
}
