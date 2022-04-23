#include <iostream>
#include "HashTable.h"
using namespace std;

int main()
{
    HashTable<int> h;
    h.insert("Mango", 100);
    h.insert("Apple", 130);
    h.insert("Banana", 120);
    h.insert("Orange", 400);
    h.insert("Papapya", 180);
    h.insert("Litchi", 500);
    h.insert("Kiwi", 153);
    // h.print();
    string fruit;
    cin >> fruit;
    if (h.search(fruit) != NULL)
    {
        cout << "Price of Fruit is " << *h.search(fruit) << endl;
    }
    else
    {
        cout << "Not Found!\n";
    }

    h["newfruit"] = 200;
    cout << "New Fruit cost is : " << h["newfruit"] << endl;
    h["newfruit"] += 10;
    cout << "New Fruit Updated cost is : " << h["newfruit"] << endl;
    return 0;
}