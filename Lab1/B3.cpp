//B3

#include <iostream>
#include <cmath>
using namespace std;

int
main ()
{
  double n, m, k, P, p, e;
  cout << "Number of apartments" << endl;
  cin >> n;
  cout << "How many floors in the house?" << endl;
  cin >> m;
  cout << "How many apartments in a floor?" << endl;
  cin >> k;
  P = m*k;
  p = ceil(n/P);
  cout << "Entrace = " << p << endl;
  e = (n-(P*(p-1)))/k;
  cout << "Floor = " << ceil(e);
}
