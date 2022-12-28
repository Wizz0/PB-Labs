//B5

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double r(double x1, double y1, double x2, double y2) {
    double res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return res;
}

double solve(vector<double> &x, vector<double> &y)
{
    double minr = r(x[0], y[0], x[1], y[1]);

	for (int i = 0; i < x.size(); i++) {
		for (int j = 0; j < x.size(); j++) {
			if (j == i) {
			    continue;
			    }
			else if (r(x[i], y[i], x[j], y[j]) < minr)
				minr = r(x[i], y[i], x[j], y[j]);
		}
	}
	return minr;    
}

TEST_CASE("Dulustan's tests"){
    vector<double> x, y;

    x = vector<double>{5,4,3,2,1};
    y = vector<double>{5,4,3,2,1};
    CHECK(solve(x, y) == doctest::Approx(1.41421356237));    
   
    x = vector<double>{0, -50};
    y = vector<double>{50, 0};
    CHECK(solve(x, y) == doctest::Approx(70.7106781187));    
}

//??????? 6 ??????
TEST_CASE("Student's tests"){
    vector<double> x,y;
    
    x = vector<double>{2, 0};
    y = vector<double>{0, -2};
    CHECK(solve(x,y) == doctest::Approx(2.82843));
    
    x = vector<double>{1, 2, 3, 4, 5};
    y = vector<double>{9, 8, 7, 6, 5};
    CHECK(solve(x,y) == doctest::Approx(1.41421));
    
    x = vector<double>{10, -20};
    y = vector<double>{50, -40};
    CHECK(solve(x,y) == doctest::Approx(94.8683));
    
    x = vector<double>{5, -5};
    y = vector<double>{-10, 10};
    CHECK(solve(x,y) == doctest::Approx(22.3607));
    
    x = vector<double>{0, 7, -6, 5};
    y = vector<double>{5, -8, 3, 7};
    CHECK(solve(x,y) == doctest::Approx(5.38516));
    
    x = vector<double>{11, -22, 33, -44};
    y = vector<double>{99, 88, 77, -66};
    CHECK(solve(x,y) == doctest::Approx(31.1127));
    
}

// main ???????? ?? ????-?????
/*
int main()
{
    int n; cin >> n;
    vector<double> x(n);
    cout << "first vector: " << endl;
    for (int i=0; i<n; i++){
        cin >> x[i];
    }
    cout << "second vector: " << endl;
    vector<double> y(n);
    for (int i=0; i < n; i++){
        cin >> y[i];
    }
    
    cout << solve(x,y);
}
// }
*/
