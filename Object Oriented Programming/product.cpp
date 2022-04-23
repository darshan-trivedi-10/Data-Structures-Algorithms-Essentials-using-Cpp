#include <iostream>
using namespace std;

class Product
{
    int id;
    char name[100];

public:
    int mrp;
    int selling_price;
};

int main()
{
    Product camera;
    camera.mrp = 100;
    camera.selling_price = 200;

    cout <<"Size of Product Object "<< sizeof(camera) << endl; // 4 + 100 + 4 + 4 == 112
    cout << "MRP " << camera.mrp << endl;
    cout << "Selling Price " << camera.selling_price << endl;

    return 0;
}
