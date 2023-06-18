//A2

//Программа считывает с клавиатуры натуральное число n, а потом считывает n вещественных чисел.
//Выведите через пробел количество положительных, отрицательных и нулей среди них.

#include <iostream>
using namespace std;

int main(){
	int n;
	double x, p, neg, z;
	cin >> n;
	p=0;
	neg=0;
	z=0;
	for (int i=0; i<n; i++){
		cin >> x;
		if (x>0){
			p++;
		}
		else if (x<0){
			neg++;
		}
		else if (x==0){
			z++;
		}
	}
	cout << p << " " << neg << " " << z;
}
