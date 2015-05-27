#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

#include "sinhvien.h"
#include "monhoc.h"

class Complex
{
    float real, imaginary;
public:
    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }

    void print()
    {
        cout << real
            << (imaginary < 0 ? " - " : " + ")
            << fabs(imaginary) << "i" << endl;
    }

    friend Complex operator+(Complex x, Complex y);
    friend ostream& operator<<(ostream& stream, Complex x);
    friend Complex operator*(Complex x, Complex y);
    friend Complex operator+(float x, Complex y);
    friend Complex operator+(Complex y, float x);
    friend Complex operator-(Complex x);

    Complex operator-(Complex y)
    {
        return Complex(real-y.real, imaginary-y.imaginary);
    }

    operator float()
    {
        return real;
    }
};

Complex operator+(Complex x, Complex y)
{
    //cout << "Using operator +" << endl;
    Complex a(0,0);
    a.real = y.real + x.real;
    a.imaginary = y.imaginary + x.imaginary;
    return a;
}

Complex operator*(Complex x, Complex y)
{
    return Complex(x.real*y.real - x.imaginary*y.imaginary,
                   x.real*y.imaginary + x.imaginary*y.real);
}

ostream& operator<<(ostream& stream, Complex x)
{
    stream << x.real
        << (x.imaginary < 0 ? " - " : " + ")
        << fabs(x.imaginary) << "i";
    return stream;
}

Complex operator+(float x, Complex y)
{
    return Complex(x+y.real, y.imaginary);
}

Complex operator+(Complex y, float x)
{
    return Complex(x+y.real, y.imaginary);
}

Complex operator-(Complex x)
{
    return Complex(-x.real, -x.imaginary);
}

int main()
{
    Complex a(2,3), b(4,-6);
    Complex c = operator+(a, b), d = a.operator-(b);
    Complex e = -c;

    cout << c << "\n" << d
        << "\n" << e << "\n"
        << (float)e << endl;
    return 0;
}
