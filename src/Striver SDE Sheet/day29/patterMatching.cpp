#include <bits/stdc++.h>
using namespace std;

vector<int> getPattern(string word)
{
    unordered_map<char, int> lookup;
    vector<int> pattern;
    int i = 0;
    for (char c : word)
    {
        if (lookup.find(c) != lookup.end())
        {
            pattern.push_back(lookup[c]);
        }
        else
        {
            i += 1;
            lookup[c] = i;
            pattern.push_back(i);
        }
    }
    return pattern;
}

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
    vector<string> ans;
    vector<int> p = getPattern(pattern);

    for (string word : words)
    {
        if (getPattern(word) == p)
        {
            ans.push_back(word);
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<string> words = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string pattern = "abb";

    vector<string> ans = findAndReplacePattern(words, pattern);
    for (string word : ans)
    {
        cout << word << " ";
    }
    return 0;
}
