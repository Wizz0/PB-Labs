//B3

#include <iostream>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3, x4, y4;
	cout << "A (x, y) - ?" << endl;
	cin >> x1 >> y1;
	cout << "B (x, y) - ?" << endl;
	cin >> x2 >> y2;
	cout << "C (x, y) - ?" << endl;
	cin >> x3 >> y3;
	
	//найдем x
	if (x1 == x2){
		x4 = x3;
	}
	else if (x1 == x3){
		x4 = x2;
	}
	else if (x2 == x3){
		x4 = x1;
	}
	
	//найдем y
	if (y1 == y2){
		y4 = y3;
	}
	else if (y1 == y3){
		y4 = y2;
	}
	else if (y2 == y3){
		y4 = y1;
	}
	cout << x4 << " " << y4;
}
