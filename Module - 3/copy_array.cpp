#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cin >> m;
    int arr2[n + m];
    for (int i = 0; i < n; i++)
        arr2[i] = arr1[i];

    delete[] arr1;

    for (int i = n; i < n + m; i++)
        cin >> arr2[i];

    for (int i = 0; i < n + m; i++)
        cout << arr2[i] << " ";

    return 0;
}