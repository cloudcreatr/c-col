// overloading of adding and multiplying fraction for a class

#include <iostream>
using namespace std;

class Fraction
{
public:
    int numerator;
    int denominator;

    Fraction(int num = 0, int den = 1)
    {
        numerator = num;
        denominator = den;
    }

    Fraction operator+(Fraction other)
    {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction operator*(Fraction other)
    {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }
};

int main()
{
    Fraction frac1, frac3;

    Fraction frac2(1, 4), frac4(1, 5);

    frac1 = frac2 + frac4;
    frac3 = frac2 * frac4;

    cout << "frac1: " << frac1.numerator << "/" << frac1.denominator << endl;

    cout << "frac3: " << frac3.numerator << "/" << frac3.denominator << endl;

    return 0;
}