#include <iostream>
#include <cstring>
using namespace std;

// Problem : Read N strings and print the largest string. each string can have upto 1000 characters.

int main()
{
    int n;
    cin >> n;
    cin.get();
    char sentence[1000], largest[1000];
    int largest_len = 0;
    while (n--)
    {
        cin.getline(sentence, 1000);
        // cout << sentence << endl;
        int len = strlen(sentence);
        if (len > largest_len)
        {
            strcpy(largest, sentence);
            largest_len = len;
        }
    }

    cout << largest << endl;

    return 0;
}