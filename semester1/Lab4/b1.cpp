//B1

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

bool hamming(int n)
{
    int i=1;
    int x = n;
    while (i<x) {
        if (n == 1){
            return true;
        }
        else if (n%2 == 0){
            n = n/2;
        }
        else if (n%3 == 0){
            n = n/3;
        }
        else if (n%5 == 0){
            n = n/5;
        }
        else return false;
    }
}

// перед unit-тестированием необходимо закомментировать всю функцию main() 
// и раскомментировать первые две строки программы

/*
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i=m; i<=n; i++){
        if (hamming(i)){
            cout << i << " ";
        }
    }
    return 0;
}
*/


TEST_CASE("Dulustan's tests"){
    CHECK(hamming(1));
    CHECK(hamming(8));
    CHECK(hamming(12));
    CHECK(hamming(24));
    CHECK(hamming(45));
    CHECK(hamming(384));
    CHECK(!hamming(14));
    CHECK(!hamming(26));
    CHECK(!hamming(44));
    CHECK(!hamming(365));    
    
}

TEST_CASE("Student's tests"){
    CHECK(hamming(10));
    CHECK(hamming(20));
    CHECK(hamming(40));
    CHECK(hamming(25));
    CHECK(hamming(48));
    CHECK(!hamming(9999));
    CHECK(!hamming(7));
    CHECK(!hamming(39));
    CHECK(!hamming(123));
    CHECK(!hamming(11));            
}
