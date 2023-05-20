//B4

#include <iostream>
using namespace std;

class Matrix {
    private:
        double a;
        double b;
        double c;
        double d;
    public:
        Matrix() {
            a = 0;
            b = 0;
            c = 0;
            d = 0;
        }
        Matrix(double a, double b, double c, double d){
            this->a = a;
            this->b = b;
            this->c = c;
            this->d = d;
        }
        double determinant(){
            return a*d - b*c;
        }
        Matrix transpose(){
            Matrix transposed (a,c,b,d);
            return transposed;
        }
        void print(){
            cout << a << " " << b << endl;
            cout << c << " " << d << endl;
        }
        Matrix operator+(const Matrix& other) const {
            Matrix result(a + other.a, b + other.b, c + other.c, d + other.d);
            return result;
        }
        Matrix operator*(const double& scalar) const {
            Matrix result(a * scalar, b * scalar, c * scalar, d * scalar);
            return result;
        }
        Matrix operator*(const Matrix& other) const {
            Matrix result(a * other.a + b * other.c, a * other.b + b * other.d, c * other.a + d * other.c, c * other.b + d * other.d);
            return result;
        }
        Matrix power(int k) const {
        Matrix result = *this;
        for (int i = 1; i < k; i++) {
            result = result * (*this);
        }
        return result;
        }
};

int main() {
    double a, b, c, d;
    cout << "Enter first matrix: " << endl;
    cin >> a >> b >> c >> d;
    Matrix m1(a,b,c,d);
    
    double e,f,g,h;
    cout << "Enter second matrix: " << endl;
    cin >> e >> f >> g >> h;
    Matrix m2(e,f,g,h);
    
    cout << "sum: " << endl;
    (m1 + m2).print();
    
    cout << "matrix * matrix: " << endl;
    (m1 * m2).print();
    
    double n;
    cout << "wanna martix * N? enter N: " << endl;
    cin >> n;
    cout << "matrix * " << n << ": " << endl;
    (m1 * n).print();
    
    int k;
    cout << "It's the power time. Enter k: " << endl;
    cin >> k;
    cout << "matrix ^ " << k << ":"  << endl;
    m1.power(k).print();
}
