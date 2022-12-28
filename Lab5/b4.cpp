//B4

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

int solve(vector<double> &x, vector<double> &y, double xs, double ys)
{
    double minr = r(x[0], y[0], xs, ys);
    int k;

	for (int i = 0; i < x.size(); i++) {
		if (r(x[i], y[i], xs, ys) <= minr) {
			minr = r(x[i], y[i], xs, ys);
			k = i;
		}
	}
	return k;
}

TEST_CASE("Dulustan's tests"){
    vector<double> x, y;

    x = vector<double>{5,4,3,2,1};
    y = vector<double>{5,4,3,2,1};
    CHECK(solve(x, y, 0, 0) == 4);    

    x = vector<double>{1,   4, -2};
    y = vector<double>{-10, 3, 4};
    CHECK(solve(x, y, 1, 1) == 1);  

    x = vector<double>{2,7,9,4,1,0,13};
    y = vector<double>{2,7,9,4,1,0,13};
    CHECK(solve(x, y, 7, 1) == 3);  

    x = vector<double>{0, -50};
    y = vector<double>{50, 0};
    CHECK(solve(x, y, -10, 11) == 0);    
}

//??????? 4 ?????
TEST_CASE("Student's tests"){
    vector<double> x, y;

    x = vector<double>{3, 10};
    y = vector<double>{10,3};
    CHECK(solve(x, y, 0, 0) == 1);    

    x = vector<double>{3,2,1};
    y = vector<double>{5,6,4};
    CHECK(solve(x, y, 0, 0) == 2);    

    x = vector<double>{0,2,4,6};
    y = vector<double>{9,7,5,3};
    CHECK(solve(x, y, 3, 7) == 1);    

    x = vector<double>{30, 5};
    y = vector<double>{48, 4};
    CHECK(solve(x, y, 3, 3) == 1);    

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
    
    cout << solve(x,y,3,3);
}
// }
*/
