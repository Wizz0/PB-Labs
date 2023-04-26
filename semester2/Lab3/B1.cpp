//B1

#include <cmath>
#include <iostream>

using namespace std;

class Vector {
private:
    double x;
    double y;

public:
    Vector() {
        x = 0;
        y = 0;
    }

    Vector(double x, double y) {
        this->x = x;
        this->y = y;
    }

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

    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    double operator*(const Vector& other) const {
        return x * other.x + y * other.y;
    }

    double length() const {
        return sqrt((*this) * (*this));
    }
};

int main() {
    double x, y;
    cout << "v1: " << endl;
    cin >> x >> y;
    Vector v1(x, y);
    cout << "v1(" << v1.get_x() << ", " << v1.get_y() << ")" << endl;

    cout << "v2: " << endl;
    cin >> x >> y;
    Vector v2(x, y);
    cout << "v2(" << v2.get_x() << ", " << v2.get_y() << ")" << endl;

    cout << "v1 + v2 = (" << (v1 + v2).get_x() << ", " << (v1 + v2).get_y() << ")" << endl;

    cout << "v1 * 2 = (" << (v1 * 2).get_x() << ", " << (v1 * 2).get_y() << ")" << endl;

    cout << "v1 * v2 = " << (v1 * v2) << endl;

    cout << "v1 length = " << v1.length() << endl;
    return 0;
}
