#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str), ssCopy(str);
    string word;

    int totalWords = 0;
    while (ssCopy >> word)
        totalWords++;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (totalWords == 1)
            cout << word;
        else
            cout << word << " ";

        totalWords--;
    }

    return 0;
}