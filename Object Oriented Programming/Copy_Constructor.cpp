#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Product
{
    int id;
    char name[100];
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
        strcpy(name, n);
    }

    // Our own Copy Constructor 
    Product(Product &x)
    {
        id = x.id;
        mrp = x.mrp;
        selling_price = x.selling_price;
        // name = x.name;
        strcpy(name, x.name);
    }
    // setter
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
};

int main()
{
    Product camera;
    // camera.mrp = 100;
    // camera.selling_price = 200;

    // cout << "Size of Product Object " << sizeof(camera) << endl; // 4 + 100 + 4 + 4 == 112
    // cout << "MRP " << camera.mrp << endl;
    // cout << "Selling Price " << camera.selling_price << endl;

    // camera.setmrp(100);
    // camera.set_selling_price(200);

    // cout << "Size of Product Object " << sizeof(camera) << endl; // 4 + 100 + 4 + 4 == 112
    // cout << "MRP " << camera.getmrp() << endl;
    // cout << "Selling Price " << camera.get_selling_price() << endl;
    char name[] = "GoProHero9";
    Product camera1(101, name, 28000, 26000);
    // cout << camera1.getmrp() << endl;
    // cout << camera1.get_selling_price() << endl;

    // Copy is Made

    Product camera2(camera1);
    cout << "Camera1 Deatils :  " << endl;
    camera1.show_details();
    cout << endl;

    cout << "Camera2 Deatils :  " << endl;
    camera2.show_details();

    Product camera3 = camera1;
    cout << "Camera3 Deatils :  " << endl;
    camera3.show_details();
    cout << endl;

    return 0;
}
