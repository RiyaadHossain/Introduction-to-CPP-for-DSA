#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (auto st = str.begin(); st < str.end(); st++)
        cout << *st << " ";

    cout << endl;

    for (auto st : str)
        cout << st << " ";

    return 0;
}