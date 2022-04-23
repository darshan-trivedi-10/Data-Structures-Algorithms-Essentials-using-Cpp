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
    Fraction const f3;
    f3.print();

    return 0;
}

/*
---> constant Object call only constant function
---> constant function dosen't change any property of 
      current object.

*/