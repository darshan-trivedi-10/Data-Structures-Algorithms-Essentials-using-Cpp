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

    // Pre-Increment
    Fraction &operator++()
    {
        this->numerator += this->denominator;
        simplify();
        return *this;
    }

    // Post-Increment
    Fraction &operator++(int)
    {
        this->numerator += this->denominator;
        simplify();
        return *this;
    }

    Fraction &operator+=(Fraction const &a)
    {
        int lcm = denominator * a.denominator;
        int x = lcm / denominator;
        int y = lcm / a.denominator;
        int num = x * numerator + (y * a.numerator);
        numerator = num;
        denominator = lcm;
        simplify();
        return *this;
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
    //  Watch Operator Ovarloading 2 Video.
    Fraction f1(10, 2);
    f1++;
    f1.print();
    Fraction f2(3, 7);
    f1 += f2;
    f1.print();

    return 0;
}

// 6/1 + 3/7 = (3 + 42) / 7 = 45/7
// 45 / 7