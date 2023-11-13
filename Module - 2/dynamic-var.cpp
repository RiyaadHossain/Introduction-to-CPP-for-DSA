#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *p = new int;
    *p = 100;
    return p;
}

int main()
{
    int *a = fun();
    cout << *a;
    delete a;

    return 0;
}