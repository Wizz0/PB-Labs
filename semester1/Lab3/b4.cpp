//b4

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	double x;
	cin >> x;
	int f=1, i=1;
	double xn, y=1, s=1;
	while (y>0.0001){
		xn = pow(x,i);
		f = f*i;
		y = xn/f;
		s = s+y;
		i++;
	}
	cout << s << endl;
	cout << fixed << setprecision(6);
	cout << abs(s - exp(x));
}
