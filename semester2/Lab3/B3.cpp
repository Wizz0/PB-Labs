//B3

#include <iostream>
#include <cmath>

using namespace std;

class Vector {
private:
    double x;
    double y;

public:
    Vector() : x(0), y(0) {}

    Vector(double x, double y) : x(x), y(y) {}

    double get_x() const {
        return x;
    }

    double get_y() const {
        return y;
    }

    void set_x(double x) {
        this->x = x;
    }

    void set_y(double y) {
        this->y = y;
    }
};

class Circle : public Vector {
private:
    double radius;

public:
    Circle() : Vector(), radius(0) {}

    Circle(double x, double y, double r) : Vector(x, y), radius(r) {}

    double get_area() const {
        return 3.14 * radius * radius;
    }

    double get_radius() const {
        return radius;
    }

    void set_radius(double r) {
        radius = r;
    }

    Circle operator+(const Circle& other) const {
        double new_radius = sqrt((get_area() + other.get_area()) / 3.14);
        double new_x = get_x() + other.get_x();
        double new_y = get_y() + other.get_y();
        return Circle(new_x, new_y, new_radius);
    }
};

int main() {
    double a, b, r1;
    cout << "first circle center: " << endl;
    cin >> a >> b;
    cout << "first circle radius: " << endl;
    cin >> r1;
    Circle c1(a, b, r1);
    double c, d, r2;
    cout << "second circle center: " << endl;
    cin >> c >> d;
    cout << "second circle radius: " << endl;
    cin >> r2;
    Circle c2(c, d, r2);

    cout << "=====Circle 1=====" << endl;
    cout << "Center: (" << c1.get_x() << ", " << c1.get_y() << ")" << endl;
    cout << "R: " << c1.get_radius() << endl;
    cout << "S: " << c1.get_area() << endl;
    
    cout << "=====Circle 2=====" << endl;
    cout << "Center: (" << c2.get_x() << ", " << c2.get_y() << ")" << endl;
    cout << "R: " << c2.get_radius() << endl;
    cout << "S: " << c2.get_area() << endl;
    
    Circle c3 = c1 + c2;
    cout << "=====Circle 3=====" << endl;
    cout << "Center: (" << c3.get_x() << ", " << c3.get_y() << ")" << endl;
    cout << "R: " << c3.get_radius() << endl;
    cout << "S: " << c3.get_area() << endl;
    
    return 0;
}
