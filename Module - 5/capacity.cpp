#include <bits/stdc++.h>
using namespace std;

/*
    s.size() -> returns the size of the string.
    s.capacity() -> returns current available capacity of the string.
    s.clear() -> clear the string.
    s.empty() -> return true/false if the string is empty.
    s.resize() -> change the size of the string.
 */

int main()
{
    string str;
    getline(cin, str);

    cout << "Size: " << str.size() << endl;
    cout << "Capacity: " << str.capacity() << endl;

    cout << "Is Empty: " << str.empty() << endl;

    str.resize(5);
    cout << str << endl;

    str.clear();
    cout << "Size: " << str.size() << endl;

    return 0;
}