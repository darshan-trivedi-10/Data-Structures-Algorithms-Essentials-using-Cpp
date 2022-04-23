#include <iostream>
using namespace std;

class Product
{
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    // setter
    void setmrp(int price)
    {
        mrp = price;
    }

    void set_selling_price(int price)
    {
        if (price<0)
        {
            cout<<"Price "
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
};

int main()
{
    Product camera;
    // camera.mrp = 100;
    // camera.selling_price = 200;

    // cout << "Size of Product Object " << sizeof(camera) << endl; // 4 + 100 + 4 + 4 == 112
    // cout << "MRP " << camera.mrp << endl;
    // cout << "Selling Price " << camera.selling_price << endl;

    camera.setmrp(100);
    camera.set_selling_price(200);

    cout << "Size of Product Object " << sizeof(camera) << endl; // 4 + 100 + 4 + 4 == 112
    cout << "MRP " << camera.getmrp() << endl;
    cout << "Selling Price " << camera.get_selling_price() << endl;

    return 0;
}
