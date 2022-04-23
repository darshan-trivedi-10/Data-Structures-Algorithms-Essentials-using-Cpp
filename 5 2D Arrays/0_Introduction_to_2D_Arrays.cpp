#include <iostream>
using namespace std;

void print(int arr[][100], int n, int m)
{
    // Prints
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    // n Rows m Columns
    cin >> n >> m;
    int arr[100][100];

    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    print(arr, n, m);

    char number[][10] = {
        "ONE",
        "TWO",
        "two",
        "Three",
        "Forthy",
    };

    for (int i = 0; i < 5; i++)
    {
        cout << number[i] <<" "<<number[i][0]<< endl;
    }

    return 0;
}

/*
Addrese 100 101 102 
value

Addrese 103 104 105
value

Addrese 106 107 108
value
*/