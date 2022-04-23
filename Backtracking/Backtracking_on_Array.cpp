/*

Problem Type - check for feasible solution
Optimisation Problem - find best solution (Traveling salsemen problem)
Enumeration Problem - find all solutions. (find all subset,permutation).

classical Problem - Rat in maze, n-Queen sudoku solver.

*/

#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillarray(int *arr, int i, int n, int val)
{
    if (i == n)
    {
        // Print out array
        print(arr, n);

        return;
    }

    // recrsive case
    arr[i] = val;
    fillarray(arr, i + 1, n, val + 1);
    // Backtracking step
    arr[i] = -arr[i];
}

int main()
{
    int arr[100] = {0};
    int n;
    cin >> n;
    fillarray(arr, 0, n, 1);
    print(arr, n);

    return 0;
}

/*
If we take vector we have to pass vector by refrence.
*/