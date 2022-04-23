#include <bits/stdc++.h>
using namespace std;

char *mtstrtok(char *str, char delim)
{
    static char *input = NULL;
    if (str != NULL)
    {
        input = str;
    }
    if (input == NULL)
    {
        return NULL;
    }

    //  static
    char *token = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delim)
        {
            token[i] = input[i];
        }
        else
        {
            token[i] = '\0';
            input = input + i + 1;
            return token;
        }
    }

    //  Out of the loop
    token[i] = '\0';
    //  reset the input as NULL
    input = NULL;
    return token;
}

int main()
{
    char s[1000];
    cin.getline(s, 1000);

    //  strtok()
    char *token = mtstrtok(s, ' ');
    while (token != NULL)
    {
        cout << token << endl;
        token = mtstrtok(NULL, ' ');
    }

    return 0;
}