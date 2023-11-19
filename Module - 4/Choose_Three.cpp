#include <bits/stdc++.h>
using namespace std;

// ? Why this code didn't work? But the simplier code did work. (See- Choose_Three2.cpp)
// @ Find the answer through support session or FB group

bool find_three_elements(int *arr, int n, int target)
{
    for (int i = 0; i <= n - 3; i++)
    {
        int left = i + 1, right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum < target)
                left++;
            else if (sum > target)
                right--;
            else
                return true;
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);
        find_three_elements(arr, n, s) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}

/*      if (n == 1 && arr[0] == s)
        {
            cout << "YES" << endl;
            break;
        }
        else if (n == 2 && arr[0] + arr[1] == s)
        {
            cout << "YES" << endl;
            break;
        }
        else if (n < 3)
        {
            cout << "NO" << endl;
            break;
        }
*/