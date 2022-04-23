/*
Complex Number Class

A ComplexNumber class contains two data members : one is real part (R) and other is imaginary (I) (both integer).

Implement the Complex numbers class that contains following functions -
1. constructor

You need to create the appropriate constructor.
2. plus -

This function adds two given complex numbers and updates the first complex number.
e.g.
if C1 = 4 + i5 and C2 = 3 +i1
C1.plus(C2) results in: 
C1 = 7 + i6 and C2 = 3 + i1

3. multiply -
This function multiplies two given complex numbers and updates the first complex number.
e.g.
C1 = 4 + i5 and C2 = 1 + i2
C1.multiply(C2) results in: 
C1 = -6 + i13 and C2 = 1 + i2

4. print -
This function prints the given complex number in the following format :
a + ib

Note : There is space before and after '+' (plus sign) and no space between 'i' (iota symbol) and b.

Input Format :
Line 1 : Two integers - real and imaginary part of 1st complex number
Line 2 : Two integers - real and imaginary part of 2nd complex number
Line 3 : An integer representing choice (1 or 2) (1 represents plus function will be called and 2 represents multiply function will be called)

Sample Input 1 :
4 5
6 7
1

Sample Output 1 :
10 + i12

Sample Input 2 :
4 5
6 7
2

Sample Output 2 :
-11 + i58
*/

#include <iostream>
using namespace std;
class complex_number
{
private:
    int real;
    int img;

public:
    void print()
    {
        cout << real << " + i" << img << endl;
    }

    complex_number(int r, int i)
    {
        real = r;
        img = i;
    }

    void plus(complex_number &c)
    {
        real += c.real;
        img += c.img;
    }

    void multiply(complex_number &c)
    {
        int real = (this->real * c.real) - (this->img * c.img);
        int img = (this->real * c.img) + (this->img * c.real);
        this->real = real;
        this->img = img;
    }
};

int main()
{
    int real1, real2, img1, img2;
    cin >> real1 >> img1;
    cin >> real2 >> img2;
    int choice;
    cin >> choice;

    complex_number c1(real1, img1), c2(real2, img2);

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }

    return 0;
}