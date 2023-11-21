#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string problems;
        cin >> n >> problems;

        int points = 0;
        for (int i = 0; i < problems.size(); i++)
        {
            if (problems.find(problems[i]) == i)
                points += 2;
            else
                points++;
        }

        cout << points << endl;
    }

    return 0;
}