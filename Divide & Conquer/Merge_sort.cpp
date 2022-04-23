#include <iostream>
using namespace std;

// s = start, e = end
void merge(int arr[], int s, int e)
{
    int mid = ((s + e) / 2);
    int n1 = mid - s + 1, n2 = e - mid;
    int a1[n1], b1[n2];
    for (int i = 0; i < n1; i++)
    {
        a1[i] = arr[s + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b1[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = s;
    while (i < n1 && j < n2)
    {
        if (a1[i] < b1[j])
        {
            arr[k++] = a1[i++];
        }
        else
        {
            arr[k++] = b1[j++];
        }
    }

    while (i < n1)
    {
        arr[k++] = a1[i++];
    }

    while (j < n2)
    {
        arr[k++] = b1[j++];
    }
}

void mergesort(int arr[], int s, int e)
{
    if (s < e)
    {
        int mid = (s + e) / 2;
        mergesort(arr, s, mid);
        mergesort(arr, mid + 1, e);
        merge(arr, s, e);
    }
}

int main()
{
    int n = rand();
    // cin >> n;
    int a[n];
    cout << "n " << n << endl;
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        int x = rand();
        a[i] = x;
        if (i & 1)
        {
            a[i] = -a[i];
        }
    }

    mergesort(a, 0, n);
    // cout<<"\n Me";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

/*

3 Step :

1) Divide
2) Mergesort(left) and Mergesort(right)
3) Merge(left,right); 

*/