#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char symbol;

    cin >> a >> symbol >> b;

    bool isRight = false;

    if (a > b)
    {
        if (symbol == '>')
            isRight = true;
    }
    else if (a < b)
    {
        if (symbol == '<')
            isRight = true;
    }
    else
    {
        if (symbol == '=')
            isRight = true;
    }

    isRight ? cout << "Right" : cout << "Wrong";

    return 0;
}