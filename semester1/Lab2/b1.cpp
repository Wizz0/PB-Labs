//B1

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if ((y>=x*x-2) and ((y<=x) or (y<=-x))){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
