#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    stringstream all(s);
    string word, ans = "";
    while (all >> word)
        ans = word + " " + ans;
    return ans.substr(0, ans.length() - 1);
}

int main(int argc, char const *argv[])
{
    string s = " the sky is blue ";

    string ans = reverseWords(s);

    cout << ans;

    return 0;
}
