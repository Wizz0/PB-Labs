//A3

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

vector<int> solve(vector<int> A)
{
    vector<int> res;
    int max, min, maxID, minID;
    for (int i=0; i < A.size(); i++){
        if (i == 0){
            max = A[i];
            maxID = i;
            min = A[i];
            minID = i;
        }
        else if (A[i] > max){
            max = A[i];
            maxID = i;
        }
        else if (A[i] < min){
            min = A[i];
            minID = i;
        }
    }
    A[maxID] = min;
    A[minID] = max;
    return A;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve({-1, 5, 0, 100}) == vector<int>({100, 5, 0, -1}));
    CHECK(solve({3, -1, 5, -7, 10, 36, -61, 88}) 
    == vector<int>({3, -1, 5, -7, 10, 36, 88, -61}));
    CHECK(solve({3, 10, 22, -10, 76, -61, -123, -5, 7}) 
    == vector<int>({3, 10, 22, -10, -123, -61, 76, -5, 7}));
    CHECK(solve({-2022, 1039, -3039, -2023, -2024, 777, 361}) 
    == vector<int>({-2022, -3039, 1039, -2023, -2024, 777, 361}));
}

TEST_CASE("Student's tests"){
    CHECK(solve({-100, 1, 2, 3}) == vector<int>({3, 1, 2, -100}));
    CHECK(solve({-1, 2, -3, 4, -5, 6, -7, 8, -9}) 
    == vector<int>({-1, 2, -3, 4, -5, 6, -7, -9, 8}));
    CHECK(solve({1, 2, 3, 4, 5, 6, -7, -8}) 
    == vector<int>({1, 2, 3, 4, 5, -8, -7, 6}));
    CHECK(solve({2001, 1999, 2077, -2023, 8800, 555, 3535, -2000, -1999}) 
    == vector<int>({2001, 1999, 2077, 8800, -2023, 555, 3535, -2000, -1999}));
}

// int main()
// {

// }
