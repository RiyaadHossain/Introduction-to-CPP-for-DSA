#include <iostream>
using namespace std;

int main()
{
    int num;
    char ch;

    cin >> num >> ch;

    cout << "You typed: " << num << endl
         << "Char is: " << ch << " -> " << int(ch);

    return 0;
}