//A4

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
};

int main() {
    double a, b, c, d;
    cout << "Enter a,b,c,d" << endl;
    cin >> a >> b >> c >> d;
    Matrix m(a,b,c,d);
    cout << "det: " << m.determinant() << endl;
    cout << "transposed: " << endl;
    m.transpose().print();
}