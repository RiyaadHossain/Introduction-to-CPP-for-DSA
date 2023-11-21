#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char digit[7];
        cin >> digit;

        int firstHalf = 0, secHalf = 0;

        for (int i = 0; i < 3; i++)
            firstHalf += (digit[i] - '0');

        for (int i = 3; i < 6; i++)
            secHalf += (digit[i] - '0');

        firstHalf == secHalf ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}