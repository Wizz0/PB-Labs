//A4

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <cmath>
#include <iostream>

using namespace std;

bool in_square(double x, double y)
{
    if (abs(x) <= 1 - abs(y))
        return true;
    else
        return false;
}


TEST_CASE("Dulustan's tests"){
    CHECK(in_square(0, 0));
    CHECK(in_square(-1, 0));
    CHECK(in_square(0, 1));
    CHECK(in_square(0.5, -0.2));
    CHECK(in_square(-0.3, 0.2));
    CHECK(!in_square(-1.01, 0));
}

TEST_CASE("Student's tests"){
    CHECK(in_square(1, 0));
    CHECK(in_square(0, -1));
    CHECK(in_square(0.5, 0.2));
    CHECK(in_square(-0.3, 0.2));
    CHECK(in_square(-0.5, -0.5));
    CHECK(in_square(0.4, -0.5));
    CHECK(!in_square(0.7, 0.5));
    CHECK(!in_square(2, 0));
    CHECK(!in_square(-1, 0.1));
}
