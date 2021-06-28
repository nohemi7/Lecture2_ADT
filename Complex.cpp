#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:
    //defining the constructor
    Complex(double a = 0, double b = 0);
    //getters
    void print() const;
    double getMagnitude() const;
    double getReal() const;
    double getImaginary() const;

    //setters
    void conj();

private:
    double im;
    double re;
};

//Adding function to the methods

Complex::Complex(double a, double b) {
    im = a;
    re = b;
}

void Complex::print() const {
    cout << im << "i + " << re << endl;
}

double Complex::getMagnitude() const {
    return sqrt(im*im + re*re);
}
double Complex::getReal() const { return re; }

double Complex::getImaginary() const { return im; }

void Complex::conj() {
    re = -re;
}

int main() {
    Complex c; //calls the constructor; sets everything to 0
    c.print();

    Complex c1(1, 0.5)
    c1.print();
    c1.conj();
    c1.print();
    cout << c1.magnitude() << endl;
    
    return 0;
}