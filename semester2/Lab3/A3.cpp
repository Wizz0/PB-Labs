//A3

#include <iostream>

using namespace std;

class Vector{
    private:
        double x;
        double y;
    
    public:
        Vector() {
            x = 0;
            y = 0;
        }
        Vector(double x, double y){
            this->x = x;
            this->y = y;
        }
        double get_x(){
            return x;
        }
        double get_y(){
            return y;
        }
        void set_x(double x){
            this->x=x;
        }
        void set_y(double y){
            this->y=y;
        }
};

int main(){
    double x, y;
    cout << "v1: " << endl;
    cin >> x >> y;
    Vector v1(x,y);
    cout << "v1(" << v1.get_x() << ", " << v1.get_y() << ")" << endl;
    
    cout << "v2: " << endl;
    cin >> x >> y;
    Vector v2(x, y);
    cout << "v2(" << v2.get_x() << ", " << v2.get_y() << ")" << endl;
    
    cout << "update vectors? which(1 or 2): " << endl;
    int n; cin >> n;
    if (n==1){ 
        cin >> x;
        v1.set_x(x);
        cin >> y;
        v1.set_y(y);
        cout << "v1(" << v1.get_x() << ", " << v1.get_y() << ")" << endl;
    }
    else if (n==2){
        cin >> x;
        v2.set_x(x);
        cin >> y;
        v2.set_y(y);
        cout << "v2(" << v2.get_x() << ", " << v2.get_y() << ")" << endl;
    }
    else cout << "error" << endl;
}