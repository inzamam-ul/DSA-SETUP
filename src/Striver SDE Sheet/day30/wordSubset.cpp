#include <bits/stdc++.h>
using namespace std;

vector<int> counter(string &word)
{
    vector<int> count(26);
    for (char c : word)
        count[c - 'a']++;
    return count;
}

vector<string> wordSubsets(vector<string> &A, vector<string> &B)
{
    vector<int> count(26), tmp(26);
    int i;
    for (string b : B)
    {
        tmp = counter(b);
        for (i = 0; i < 26; ++i)
            count[i] = max(count[i], tmp[i]);
    }
    vector<string> res;
    for (string a : A)
    {
        tmp = counter(a);
        for (i = 0; i < 26; ++i)
            if (tmp[i] < count[i])
                break;
        if (i == 26)
            res.push_back(a);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"}, words2 = {"e", "o"};

    vector<string> ans = wordSubsets(words1, words2);

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << ", ";
    // }

    return 0;
}
