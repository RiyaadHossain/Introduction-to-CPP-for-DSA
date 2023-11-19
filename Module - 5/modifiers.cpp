#include <bits/stdc++.h>
using namespace std;

/*
    s+= -> append another string.
    s.append() -> append another string.
    s.push_back() -> add character to the last of the string.
    s.pop_back() -> remove the last character of the string.
    s= -> assign string.
    s.assign() -> assign string.
    s.erase() -> erase characters from the string.
    s.replace() -> replace a portion of the string.
    s.insert() -> insert a portion to a specific position.
 */

int main()
{
    string str;
    getline(cin, str);

    string stTemp = " World";

    str += stTemp; // Or str.append(stTemp);
    cout << "1 -> " << str << endl;

    str.push_back('G');
    cout << "2 -> " << str << endl;

    str.pop_back();
    cout << "3 -> " << str << endl;

    /*
    1. Empty call -> erase all
    2. Single param call -> erase from that index passes as the argument
    3. Double param call -> erase from the index passes as first argument and erase till second argument
    */
    str.erase(2, 2);
    cout << "4 -> " << str << endl;

    str = "Hello World";
    str.replace(5, 1, " Hi Bye ");
    cout << "5 -> " << str << endl;

    str = "Hello World";
    str.insert(6, "Hi Bye ");
    cout << "6 -> " << str << endl;

    return 0;
}