//A3

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
