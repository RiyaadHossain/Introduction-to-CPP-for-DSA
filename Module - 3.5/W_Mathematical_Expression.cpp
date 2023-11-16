#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char symbol, q;

    cin >> a >> symbol >> b >> q >> c;

    int isCorrect = 0, correctAns;

    if (symbol == '+')
        a + b == c ? isCorrect = true : correctAns = a + b;
    else if (symbol == '-')
        a - b == c ? isCorrect = true : correctAns = a - b;
    else
        a *b == c ? isCorrect = true : correctAns = a * b;

    isCorrect ? cout << "Yes" : cout << correctAns;

    return 0;
}