//A3

//Числа Фибоначчи определяются формулами: F0 = 0; F1 = 1; Fn = Fn−1+Fn−2, n = 2, 3, . . . .
//Ввести с клавиатуры целое число M и вывести через пробел первое число Фибоначчи,
//большее M , и его номер k.

#include <iostream>
using namespace std;

int main()
{
  int m;
  cin >> m;
  int a = 0, b = 1, F;
  int i=2;
  	while (i>0){
		F = a + b;
		a = b;
		b = F;
		if (F>m) {
			break;
		}
		i++;
	  }
	cout << F << " " << i;
  	return 0;
}
