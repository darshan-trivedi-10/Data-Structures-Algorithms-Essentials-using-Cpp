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
    Vehicle()
    {
        cout << "Vehicle default Constructor\n";
    }

    ~Vehicle()
    {
        cout << "Vehicle default Destructor\n ";
    }

    Vehicle(int maxSpeed)
    {
        cout << "Vehicle Parametrized Constructor\n";
        this->maxSpeed = maxSpeed;
    }
};

class car : public Vehicle
{
public:
    int numGears;
    car()
    {
        cout << "Car default Constructor\n";
    }
    car(int x) : Vehicle(x)
    {
        cout << "Car Parametrized Constructor\n";
    }

    ~car()
    {
        cout << "Car default Destructor\n ";
    }
    void print()
    {
        cout << "NumTyres : " << numTyres << endl;
        cout << "Color : " << color << endl;
        cout << "Num Gears : " << numGears << endl;
        // cout << "Max - Speed : " << maxSpeed << endl;
    }
};

class HondaCity : public car
{
public:
    HondaCity(int x) : car(x)
    {
        cout << "Honda - City Parametrized Constructor\n";
    }
    HondaCity()
    {
        cout << "Honda - City default Constructor\n";
    }

    ~HondaCity()
    {
        cout << "Honda - City default Destructor\n ";
    }
};

int main()
{
    // Vehicle v;
    // car c;

    HondaCity h(10);
    cout << "\n\n**************************************\n\n";
    HondaCity h1;

    return 0;
}