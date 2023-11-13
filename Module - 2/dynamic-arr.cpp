#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    //? Dynamic Memory don't autometically delete any data that's why it accessable outside fun function

    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    return arr;
}

int main()
{
    int *arr = fun();
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}