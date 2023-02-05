//a3

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cmath>
#include "doctest.h"

using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    double res;
    res = sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));
	return res;
}

double solve (double x1, double y1, double x2, double y2, double x3, double y3){
    double res;
    double a = dist(x1,y1,x2,y2);
    double b = dist(x1,y1,x3,y3);
    double c = dist(x2,y2,x3,y3);
    if ((a > (b+c)) or (b > (a+c)) or (c > (a +b))){
        res = -1;
    }
    
    else if ((a == b) and (a == c)){
        res = -1;
    }
    else if ((a >= b) and (a >= c)){
        res = a;
    }
    else if ((b >= a) and (b >= c)){
        res = b;
    }
    else if ((c >= a) and (c >= b)){
        res = c;
    }
    return res;
}

TEST_CASE("Test"){
    CHECK(dist(0, 0, 1000, 0) == doctest::Approx(1000));
    CHECK(dist(0, 0, 200, 0) == doctest::Approx(200));
    CHECK(dist(1, -5, 20, 0) == doctest::Approx(19.6469));
    CHECK(dist(1, 2, 3, 4) == doctest::Approx(2.82843));
    CHECK(dist(0, 0, 0, 0) == doctest::Approx(0));

    CHECK(solve(0, 0, 6, 0, 3, 2) == doctest::Approx(6));
    CHECK(solve(4, 5, 5, 6, 0, 5) == doctest::Approx(5.09902));
    CHECK(solve(1, 2, 3, 4, 5, 6) == doctest::Approx(5.65685));
    CHECK(solve(1, 1, 1, 1, 1, 1) == -1);
    CHECK(solve(0, 0, 0, 0, 0, 0) == -1);
}
