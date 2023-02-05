//A1

#include <iostream>
using namespace std;

int main(){
	int n;
	double x, a, s;
	cin >> n;
	s=0;
	for (int i=0; i<n; i++){
		cin >> x;
		a=x*x;
		s+=a;
	}
	cout << "sr. kvadr. = " << s/n;
}
