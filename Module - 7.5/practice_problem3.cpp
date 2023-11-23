#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence, word;

    getline(cin, sentence);
    cin >> word;

    int cnt = 0;

    while (sentence.find(word) != string::npos)
    {
        int strLen = word.size();
        int startIdx = sentence.find(word);
        sentence.replace(startIdx, strLen, " ");
        cnt++;
    }

    cout << cnt;

    return 0;
}