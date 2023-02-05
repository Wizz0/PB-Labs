//A5

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>

using namespace std;

vector<int> solve(vector<int> A)
{
    int x, i = 0;
    for (int i=0; i < A.size(); i += 2){
        if (i == A.size() - 1){
            break;
        }
        x = A[i];
        A[i] = A[i+1];
        A[i+1] = x;
    }
    return A;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve({-1, 5, 0, 100}) == vector<int>({5, -1, 100, 0}));
    CHECK(solve({3, -1, 5, -7, 10, 36, -61, 88}) 
    == vector<int>({-1, 3, -7, 5, 36, 10, 88, -61}));
    CHECK(solve({3, 10, 22, -10, 76, -61, -123, -5, 7}) 
    == vector<int>({10, 3, -10, 22, -61, 76, -5, -123, 7}));
    CHECK(solve({-2022, 1039, -3039, -2023, -2024, 777, 361}) 
    == vector<int>({1039, -2022, -2023, -3039, 777, -2024, 361}));     
}

TEST_CASE("Student's tests"){
    CHECK(solve({-100, 1, 2, 3}) == vector<int>({1, -100, 3, 2}));
    CHECK(solve({-1, 2, -3, 4, -5, 6, -7, 8, -9}) 
    == vector<int>({2, -1, 4, -3, 6, -5, 8, -7, -9}));
    CHECK(solve({1, 2, 3, 4, 5, 6, -7, -8}) 
    == vector<int>({2, 1, 4, 3, 6, 5, -8, -7}));
    CHECK(solve({2001, 1999, 2077, -2023, 8800, 555, 3535, -2000, -1999}) 
    == vector<int>({1999, 2001, -2023, 2077, 555, 8800, -2000, 3535, -1999}));   
}

// int main()
// {

// }
