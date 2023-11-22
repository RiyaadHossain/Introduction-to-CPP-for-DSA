#include <bits/stdc++.h>
using namespace std;

class WordCount
{
public:
    char value;
    int count;
};

bool cmp(WordCount a, WordCount b)
{
    return a.count > b.count;
}

int main()
{
    string word;
    cin >> word;
    int n = word.size();

    WordCount freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i].value = i + 'a';
        freq[i].count = 0;
    }

    for (int i = 0; i < n; i++)
        freq[word[i] - 'a'].count++;

    sort(freq, freq + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        while (freq[i].count--)
            cout << freq[i].value;
    }

    return 0;
}