//B3
//Составить программу определения номера подъезда и этажа квартиры по заданным номеру
//квартиры n, количеству этажей в доме m и количеству квартир на лестничной площадке k.

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
