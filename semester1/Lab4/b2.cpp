//B2

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

int Syracuse(int n)
{
    int res = 0;
    if (n==1){
        return res;
    }
    for (int i=0; i<n; i++){
        if (n==1){
            return res;
        }
        else if (n%2 == 0){
            n = n/2;
            res++;
        }
        else if (n%2 != 0){
            n = n*3 + 1;
            res++;
        }
    }
}

/*
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i=m; i<=n; i++){
        cout << Syracuse(i) << " ";
    }
    return 0;
}
*/


TEST_CASE("Dulustan's tests"){
    CHECK(Syracuse(1)==0);
    CHECK(Syracuse(2)==1);    
}


TEST_CASE("Student's tests"){
    CHECK(Syracuse(3)==5);
    CHECK(Syracuse(4)==2);
    CHECK(Syracuse(5)==4);
    CHECK(Syracuse(6)==6);
    CHECK(Syracuse(7)==10);
    CHECK(Syracuse(8)==2);
    CHECK(Syracuse(9)==13);
    CHECK(Syracuse(10)==4);
    CHECK(Syracuse(11)==9);
    CHECK(Syracuse(100)==11);
    CHECK(Syracuse(101)==11);
    CHECK(Syracuse(102)==11);
}

