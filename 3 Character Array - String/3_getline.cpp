#include <iostream>
using namespace std;

int main()
{
    char sentence[1000];

    cin.getline(sentence, 1000);
    cout << sentence << endl;

    char paragraph[1000];
    // cin.getline(paragraph, 1000, '.');
    cin.getline(paragraph, 1000, '\n');
    cout << paragraph << endl;

    char temp = cin.get();
    int len = 0;

    // Could have checked out len dosen't exceed the sentence array, additional check
    while (temp != '\n')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }

    sentence[len] = '\0';

    cout << "Length : " << len << endl;
    cout << sentence << endl;

    return 0;
}