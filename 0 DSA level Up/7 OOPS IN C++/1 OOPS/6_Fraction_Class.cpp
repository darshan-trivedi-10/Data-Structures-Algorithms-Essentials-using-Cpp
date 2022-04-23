#include <bits/stdc++.h>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        if (denominator == 0)
        {
            cout << "Denominator is not 0\n";
        }
        else
        {
            this->numerator = numerator;
            this->denominator = denominator;
        }
    }

    void print()
    {
        cout << numerator << " / " << denominator << endl;
    }

    void simplify()
    {
        int gcd = __gcd(this->numerator, this->denominator);
        this->numerator /= gcd;
        this->denominator /= gcd;
    }

    void add(Fraction const &a)
    {
        this->numerator = (this->numerator * a.denominator) + (a.numerator * this->denominator);
        this->denominator = this->denominator * a.denominator;

        simplify();
    }

    void multiply(Fraction const &f)
    {
        this->numerator *= f.numerator;
        this->denominator *= f.denominator;

        simplify();
    }
};

int main()
{
    Fraction f1(10, 2);
    Fraction f2(15, 4);

    f1.add(f2);
    f1.print();
    f2.print();
    return 0;
}