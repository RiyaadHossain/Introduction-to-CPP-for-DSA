#include <bits/stdc++.h>
using namespace std;

/*
    s[i] -> access the ith index of the string.
    s.at(i) -> access the ith index of the string.
    s.back() -> access the last element of the string.
    s.front() -> access the first element of the string.
*/

int main()
{
    string str;
    getline(cin, str);

    cout << str[10] << endl;
    cout << str.at(6) << endl;
    cout << str.front() << endl; // Or *str.begin()
    cout << str.back() << endl;  // Or *(str.end() - 1)

    return 0;
}