//B3

//Составить программу определения номера подъезда и этажа квартиры по заданным
//номеру квартиры n, количеству этажей в доме m и количеству квартир на лестничной
//площадке k.

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  double n, m, k, P, p, e;
  cout << "Number of apartments" << endl;
  cin >> n; //Номер квартиры
  cout << "How many floors in the house?" << endl;
  cin >> m; //количество этажей
  cout << "How many apartments in a floor?" << endl;
  cin >> k; //количество квартир на этаже
  P = m*k;
  p = ceil(n/P);
  cout << "Entrace = " << p << endl; //указать подъезд
  e = (n-(P*(p-1)))/k;
  cout << "Floor = " << ceil(e);
  
  return 0;
}
