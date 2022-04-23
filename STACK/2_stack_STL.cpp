#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> books;
    books.push("C++");
    books.push("JAVA");
    books.push("Python");
    books.push("OS");

    while (!books.empty())
    {
        cout << books.top() << '\n';
        books.pop();
    }

    return 0;
}