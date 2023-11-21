#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    while (str.find("EGYPT") != -1)
    {
        int findAt = str.find("EGYPT");
        str.replace(findAt, 5, " ");
    }

    cout << str;

    return 0;
}
