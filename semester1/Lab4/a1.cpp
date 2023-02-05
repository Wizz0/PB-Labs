//a1

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


TEST_CASE("Test"){
    CHECK(power(1,100) == 1);
    CHECK(power(2,10) == 1024);
    CHECK(power(10,3) == 1000);  
    CHECK(power(7,3) == 343);
    CHECK(power(5,10) == 9765625);
}
