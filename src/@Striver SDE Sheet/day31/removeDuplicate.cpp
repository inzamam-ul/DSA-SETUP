#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    int i = 0;
    while (s.length() != 0 && i < s.length())
    {
        string target = "";
        target.push_back(s[i]);
        target.push_back(s[i]);
        if (s.find(target) < s.length())
        {
            cout << "found: " << target << endl;
            s.erase(s.find(target), 2);
        }
        else
            i++;
    }

    return s;
}

int main(int argc, char const *argv[])
{
    string s = "abbaca";
    string ans = removeDuplicates(s);
    cout << ans;
    return 0;
}
