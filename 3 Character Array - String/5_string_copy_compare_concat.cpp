#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];

    //Calc Length
    cout << strlen(a) << endl; // print 5

    // Copy one string to anthor string
    strcpy(b, a);      // O(string size)
    cout << b << endl; // print apple

    // Compare Two string
    cout << strcmp(a, b) << endl; // print 0

    //
    char web[100] = "www.";
    char domain[100] = "darshantrivedi.in";

    strcat(web, domain);
    cout << "Web " << web << endl;
    strcpy(b, web);
    cout << b << endl;
    cout << strcmp(a, b) << endl;

    return 0;
}