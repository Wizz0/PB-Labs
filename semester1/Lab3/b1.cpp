//B1

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x;
	int x1, x2, x3, x4;
	for (int i=1000; i < 9999; i++){
		x=i;
		x1 = x / 1000;
		x2 = x % 1000 / 100;
		x3 = x % 1000 % 100 / 10;
		x4 = x % 1000 % 100 % 10;
		
		if (pow(x1,4) + pow(x2,4) + pow(x3,4) + pow(x4,4) == x){
			cout << i << endl;
		} 
	}
}
