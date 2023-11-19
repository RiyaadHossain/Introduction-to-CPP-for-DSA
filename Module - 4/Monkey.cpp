#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max_len = 100001;
    char str[max_len];

    while (cin.getline(str, max_len))
    {

        int n = 0;
        while (str[n] != '\0')
            n++;

        sort(str, str + n);

        for (int i = 0; i < n; i++)
        {
            if (str[i] != ' ')
                cout << str[i];
        }

        cout << endl;
    }

    return 0;
}
