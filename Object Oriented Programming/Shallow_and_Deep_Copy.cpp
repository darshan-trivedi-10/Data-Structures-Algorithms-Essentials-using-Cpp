#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Product
{
    int id;
    char *name;
    int mrp;
    int selling_price;

public:
    //Constructor

    // default constructor
    Product()
    {
        cout << "Constructor Called !!\n";
    }

    // Parametarize constructor
    Product(int id, char n[10], int mrp, int selling_price)
    {
        this->id = id;
        this->mrp = mrp; // (*this).mrp = mrp; both are same
        this->selling_price = selling_price;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Our own Copy Constructor
    // Product(Product &x)
    // {
    //     id = x.id;
    //     mrp = x.mrp;
    //     selling_price = x.selling_price;
    //     name = new char[strlen(x.name) + 1];
    //     strcpy(name, x.name);
    // }
    // setter

    void operator=(Product &x)
    {
        // Deep Copy inside copy Assigment Operator
        id = x.id;
        mrp = x.mrp;
        selling_price = x.selling_price;
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
    }
    void setmrp(int price)
    {
        mrp = price;
    }

    void set_selling_price(int price)
    {
        if (price < 0)
        {
            cout << "Price must be Greater than 0\n";
        }

        if (price < mrp)
        {
            selling_price = price;
        }
        else
        {
            selling_price = mrp;
        }
    }

    // getter

    int getmrp()
    {
        return mrp;
    }

    int get_selling_price()
    {
        return selling_price;
    }

    void show_details()
    {
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "Selling Price : " << selling_price << endl;
        cout << "MRP : " << mrp << endl;
        cout << "-----------------------------" << endl;
    }

    void setname(char *name)
    {
        strcpy(this->name, name);
    }
    
};

int main()
{
    Product camera(101, "goPro", 2800, 3040);
    // Product oldcamera(camera);
    // Product webcam(camera);

    Product oldcamera = camera; // Deep Copy
    oldcamera.setname("Gopro8");
    oldcamera.show_details();
    camera.show_details();

    return 0;
}
