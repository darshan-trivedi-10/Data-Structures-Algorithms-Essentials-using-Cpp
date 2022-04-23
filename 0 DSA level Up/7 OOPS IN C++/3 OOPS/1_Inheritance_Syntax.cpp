#include <iostream>
using namespace std;

class Vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;
};

class car : public Vehicle
{
public:
    int numGears;
    void print()
    {
        cout << "NumTyres : " << numTyres << endl;
        cout << "Color : " << color << endl;
        cout << "Num Gears : " << numGears << endl;
        // cout << "Max - Speed : " << maxSpeed << endl;
    }
};

int main()
{
    Vehicle v;
    v.color = "Red";
    // v.numTyres = 4;
    // v.maxSpeed = 100;

    car c;
    c.color = "White";
    c.numGears = 5;
    // c.numTyres = 4;

    return 0;
}