#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int i = 0;
    int mx = INT_MIN;
    int mn = INT_MAX;

    while (cin >> arr[i])
    {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);

        i++;
    }

    cout << mn << " " << mx;

    return 0;
}