//a2

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;

long long power(long long x, unsigned k)
{
    long long res = 1;
    for (int i=1; i<=k; i++){
    	res *= x;
	}
	return res;
}

double sum_m(int m){
    double res = 0;
    for (int i=1; i<=10; i++){
        res += power(i,m);
    }
    return res;
}

TEST_CASE("Test"){
    CHECK(sum_m(1) == 55);
    CHECK(sum_m(2) == 385);
    CHECK(sum_m(3) == 3025);
    CHECK(sum_m(4) == 25333);
    CHECK(sum_m(5) == 220825);
}
