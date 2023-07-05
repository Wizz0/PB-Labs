//A4

//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите
//эти числа. Если соседних элементов одного знака нет - не выводите ничего. Если таких
//пар соседей несколько - выведите первую пару.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

vector<int> solve(vector<int> A)
{
    int a, b;
    for (int i=1; i<A.size(); i++){
        if (A[i] >= 0 and A[i-1] >= 0){
            a = A[i-1];
            b = A[i];
            break;
        }
        else if (A[i] <= 0 and A[i-1] <= 0){
            a = A[i-1];
            b = A[i];
            break;
        }
    }
    vector<int> res{a, b};
    return res;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve({-1, 5, 0, 100}) == vector<int>({5, 0}));
    CHECK(solve({3, -1, 5, -7, 10, 36, -61, 88}) == vector<int>({10, 36}));
    CHECK(solve({3, 10, 22, -10, 76, -61, -123, -5, 7}) == vector<int>({3, 10}));
    CHECK(solve({-2022, 1039, -3039, -2023, -2024, 777, 361}) == vector<int>({-3039, -2023}));     
}

TEST_CASE("Student's tests"){
    CHECK(solve({-10, 6, -8, 9, 10}) == vector<int>({9, 10}));
    CHECK(solve({1, 2, 3, -4, -5}) == vector<int>({1, 2}));
    CHECK(solve({-3, 10, -22, -100, 76}) == vector<int>({-22, -100}));
    CHECK(solve({1, 1, 2, 2, 3, 3535, 361}) == vector<int>({1, 1}));    
}

// int main()
// {

// }
