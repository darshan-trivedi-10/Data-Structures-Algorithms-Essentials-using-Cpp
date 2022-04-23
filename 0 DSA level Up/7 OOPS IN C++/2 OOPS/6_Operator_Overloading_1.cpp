#include <bits/stdc++.h>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction()
    {
        cout << "Default Constructor\n";
    }

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

    int getNumerator() const
    {
        return numerator;
    }

    int getDenominator() const
    {
        return denominator;
    }

    void setDenominator(int n)
    {
        denominator = n;
    }

    void setNumerator(int d)
    {
        numerator = d;
    }

    void print() const
    {
        cout << numerator << " / " << denominator << endl;
    }

    void simplify()
    {
        int gcd = __gcd(this->numerator, this->denominator);
        this->numerator /= gcd;
        this->denominator /= gcd;
    }

    Fraction add(Fraction const &a) const
    {
        int lcm = denominator * a.denominator;
        int x = lcm / denominator;
        int y = lcm / a.denominator;
        int num = x * numerator + (y * a.numerator);
        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    Fraction operator+(Fraction const &a) const
    {
        int lcm = denominator * a.denominator;
        int x = lcm / denominator;
        int y = lcm / a.denominator;
        int num = x * numerator + (y * a.numerator);
        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    Fraction operator*(Fraction const &f) const
    {
        int n = this->numerator * f.numerator;
        int d = this->denominator * f.denominator;
        Fraction fnew(n, d);
        fnew.simplify();
        return fnew;
    }

    bool operator==(Fraction const &f) const 
    {
        return (this->numerator == numerator && this->denominator == denominator);
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
    Fraction f1(10, 2), f2(15, 4);
    Fraction f3 = f1 + f2;
    f3.print();
    Fraction f4 = f1 * f2;
    if (f2 == f4)
    {
        cout << "Equal\n";
    }
    else
    {
        cout << "Not Equal\n";
    }

    return 0;
}
