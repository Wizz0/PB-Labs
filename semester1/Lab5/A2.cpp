//A2

//Дан массив целых чисел, среди которых гарантированно есть отрицательный. Поменять
//местами в массиве первый отрицательный элемент с последним отрицательным. Вывести
//полученный массив.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
using namespace std;

vector<int> solve(vector<int> A)
{
    int minID, maxID, min, max;
    for (int i=0; i < A.size(); i++){
        if (A[i] < 0){
            minID = i;
            min = A[i];
            break;
        }
    }
    for (int i=0; i < A.size(); i++){
        if (A[i] < 0){
            maxID = i;
            max = A[i];
        }
    }
    A[maxID] = min;
    A[minID] = max;
    return A;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve({-1, 5, 0, 100}) == vector<int>({-1, 5, 0, 100}));
    CHECK(solve({3, -1, 5, -7, 10, 36, -61, 88}) 
    == vector<int>({3, -61, 5, -7, 10, 36, -1, 88}));
    CHECK(solve({3, 10, 22, -10, 76, -61, -123, -5, 7}) 
    == vector<int>({3, 10, 22, -5, 76, -61, -123, -10, 7}));
    CHECK(solve({-2022, 1039, -3039, -2023, -2024, 777, 361}) 
    == vector<int>({-2024, 1039, -3039, -2023, -2022, 777, 361}));
}

TEST_CASE("Student's tests"){
    CHECK(solve({-100, 1, 2, 3}) == vector<int>({-100, 1, 2, 3}));
    CHECK(solve({-1, 2, -3, 4, -5, 6, -7, 8, -9}) 
    == vector<int>({-9, 2, -3, 4, -5, 6, -7, 8, -1}));
    CHECK(solve({1, 2, 3, 4, 5, 6, -7, -8}) 
    == vector<int>({1, 2, 3, 4, 5, 6, -8, -7}));
    CHECK(solve({2001, 1999, 2077, -2023, 8800, 555, 3535, -2000, -1999}) 
    == vector<int>({2001, 1999, 2077, -1999, 8800, 555, 3535, -2000, -2023}));
}

// int main()
// {

// }
