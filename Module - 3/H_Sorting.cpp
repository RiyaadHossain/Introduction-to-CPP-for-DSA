#include <bits/stdc++.h>
using namespace std;

void sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int targetIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[targetIdx] > arr[j])
                targetIdx = j;
        }

        swap(arr[targetIdx], arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}