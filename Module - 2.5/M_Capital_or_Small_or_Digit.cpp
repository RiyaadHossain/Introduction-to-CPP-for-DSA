#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'z')
    {
        cout << "ALPHA" << endl;

        if (ch >= 'a' && ch <= 'z')
            cout << "IS SMALL";
        else
            cout << "IS CAPITAL";
    }
    else
        cout << "IS DIGIT";

    return 0;
}
