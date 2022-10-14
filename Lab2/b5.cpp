//B5

#include <iostream>
using namespace std;

int main(){
	int d, m, y;
	cout << "Enter the date (01 01 2001): ";
	cin >> d >> m >> y;
	if (d > 31){
		cout << "WRONG";
	}
	else if (m > 12){
		cout << "WRONG";
	}
	else if (y <= 0){
		cout << "WRONG";
	}
	else if (m==02 and d>28){
		cout << "WRONG";
	}
	else if ((m%2==0 and m!=10) and (d>30)){
		cout << "WRONG";
	}
    
	else if (y%4 != 0 or (y%100 == 0 and y%400 != 0) and d<29){
        cout << "WRONG";
    }
	
	else {
		cout << "It's all good, man!";
	}
	
}
