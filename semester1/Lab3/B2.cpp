//B2

//Найти и вывести через пробел в одной строке наибольшую и наименьшую цифры в записи
//данного натурального числа n.

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
