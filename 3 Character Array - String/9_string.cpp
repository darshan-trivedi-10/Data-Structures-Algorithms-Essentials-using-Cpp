#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s; // Dynamic charcter array
    s = "Hello World";
    cout << s << endl;
    getline(cin, s);
    // getline(cin, s, '.');
    cout << s << endl;

    for (char c : s)
    {
        cout << c << " ";
    }
    int n = 5;
    vector<string> vec_s(n);
    while (n--)
    {
        getline(cin, vec_s[n]);
        cout << vec_s[n] << endl;
    }

    return 0;
}