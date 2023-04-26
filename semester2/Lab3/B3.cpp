//B2

#include <iostream>

using namespace std;

class Vector{
    protected:
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

class Circle : public Vector {
    private:
        double radius;
    
    public:
        Circle() : Vector() {
            radius = 0;
        }
        Circle(double x, double y, double r) : Vector(x, y) {
            radius = r;
        }
        Circle(double r) : Vector() {
            radius = r;
        }
        Circle(Vector v) : Vector(v) {
            radius = 1;
        }
        double get_radius() {
            return radius;
        }
        void set_radius(double r) {
            radius = r;
        }
        double get_square() {
            return 3.14 * radius * radius;
        }
};

int main(){
    double x, y, r;
    cout << "Enter the center coordinates of the circle: " << endl;
    cin >> x >> y;
    cout << "Enter the radius: " << endl;
    cin >> r;
    cout << "How to return the square of circle?\n1.Through vector(r=0)\n2.Through r(x,y=0)\n3.Through vector and radius" << endl;
    int n; cin >>n;
    if (n == 1){
        Vector center(x, y);
        Circle c(center);
        cout << "Circle center: (" << c.get_x() << ", " << c.get_y() << ")" << endl;
        cout << "R = " << c.get_radius() << endl;
        cout << "S = " << c.get_square() << endl;
    }
    else if (n == 2){
        Circle c(r);
        cout << "Circle center: (" << c.get_x() << ", " << c.get_y() << ")" << endl;
        cout << "R = " << c.get_radius() << endl;
        cout << "S = " << c.get_square() << endl;
    }
    else if (n == 3){
        Circle c(x,y,r);
        cout << "Circle center: (" << c.get_x() << ", " << c.get_y() << ")" << endl;
        cout << "R = " << c.get_radius() << endl;
        cout << "S = " << c.get_square() << endl;
    }
    return 0;
}
