//b2

#include <iostream>
using namespace std;

int main(){
	int n, max, min;
	cin >> n;
	while (n > 0) {
		if (n % 10 > max){
			max = n % 10;
		}
		else {
			min = n % 10;	
		}
	n = n / 10;
	}
	
	cout << max << " " << min;
}
