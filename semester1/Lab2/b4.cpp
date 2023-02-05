//B4

#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	int n1,n2,n3,n4;
	cin >> n;
	n1 = n / 1000;
	n2 = n / 100 % 10;
	n3 = n / 10 % 100 % 10;
	n4 = n % 1000 % 100 % 10;
	if (n1 % 2 != 0){
		cout << "YES";
	}
	else if (n2 % 2 != 0){
		cout << "YES";
	}
	else if (n3 % 2 != 0){
		cout << "YES";
	}
	else if (n4 % 2 != 0){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
}

