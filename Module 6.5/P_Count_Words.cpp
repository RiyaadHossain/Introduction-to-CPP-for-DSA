#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int wordCount = 0;

    bool found = false;
    for (auto ch : str)
    {
        if (isalpha(ch) && !found)
        {
            wordCount++;
            found = true;
        }
        else if (!isalpha(ch))
            found = false;
    }

    cout << wordCount;

    return 0;
}