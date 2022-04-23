#include <iostream>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// Given a number like 2021, convert into string like "two zero two one" recursively
void number_spell(int num)
{
    if (num == 0)
    {
        return;
    }

    int digit = num % 10;
    number_spell(num / 10);
    cout<<spell[digit]<<" ";
}

int main()
{
    number_spell(2021);
    return 0;
}

// All Occurence
