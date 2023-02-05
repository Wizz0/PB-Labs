//b3

#include <iostream>
using namespace std;

int main(){
	long long n;
	int a,b,x,y;
	cin >> n;
	for (int i=0; i < 8; i++){
		if (i==0){
			a = n % 10;
			x = a;
			x+=x;
		}
		else if (i > 0){
			a = n / 10 % 10;
			x = a;
			x+=x;
		}
	}
	for (int i=0; i < 8; i++){
		if (i==0){
			b = n / 10 % 10;
			if (b >= 10){
				b = (b /10) + (b % 10);
			}
			y = b;
			y+=y;
		}
		else if (i > 0){
			b = n / 100 % 10;
			if (b >= 10){
				b = (b/10) + (b%10);
			}
			y = b;
			y+=y;	
		}
	}
	
	if ((x+y) % 10 == 0) {
		cout << "VALID";
	}                   
	else if ((x+y) % 10 != 0){
		cout << "INVALID";
	}                                                                                                          
}
