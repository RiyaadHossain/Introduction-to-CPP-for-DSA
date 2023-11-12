#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mn = min(a, b); // Header File - Algorithm
    int mx = max(a, b); // Header File - Algorithm

    swap(a, b); // Header File - utility

    cout << a << " " << b << endl
         << "min -> " << mn << endl
         << "max -> " << mx;

    return 0;
}