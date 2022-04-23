// Basic About Character Array
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Creating a char Array
    // char a[100] = {'D', 'a', 'r', 's', 'h', 'a', 'n'};         // Wrong
    char a1[100] = {'D', 'a', 'r', 's', 'h', 'a', 'n', '\0'}; // right
    char a2[100] = "Darshan";                                 // right
    // cout << a << " " << a1 << " " << a2 << endl;
    cout << strlen(a1) << endl; // print 8 - Number of visible characters
    cout << sizeof(a2) << endl; // print 9 - +1 Because of Null character print(100)

    // cin >> a1;
    // cout << a1 << endl;

    // Input & Output using cin & cout
    char full_name[100];
    // cin>>full_name; // Wrong for (darshan trivedi, dbt sdt)
    char temp = cin.get();
    int len = 0;
    // full_name[len++] = temp;
    while (temp != '#')
    {
        full_name[len++] = temp;
        // len++;
        // cout << temp;
        temp = cin.get();
    }

    full_name[len] = '\0';
    // cout << full_name;
    // cout << len << endl;

    // getline(cin, full_name,'\n');
    cout << full_name << endl;

    return 0;
}

/*
https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/lecture/26672352#questions/15501330

*/