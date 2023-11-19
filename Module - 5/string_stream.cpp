#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence); // ss << sentence;
    string word;

    while (ss >> word)
        cout << word << endl;

    return 0;
}