#include <iostream>
using namespace std;

/*
Practise Problem : Given a long route containing N,S,E,W directions, find the shortest path to reach the location. you are start from (0,0).

Input :
SNNNEWE

Output :
NNE

*/
int main()
{
    int x = 0, y = 0;
    char route[1000];
    cin.getline(route, 1000);
    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }

    cout << x << " " << y << endl;

    // Other Case :
    if (x >= 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "E";
        }
    }
    else if (x < 0 and y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x != 0)
        {
            cout << "W";
            x++;
        }
    }
    else if (x < 0 && y < 0)
    {
        while (y != 0)
        {
            cout << "S";
        }

        while (x != 0)
        {
            cout << "W";
            x++;
        }
    }
    else
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "E";
        }
    }

    return 0;
}