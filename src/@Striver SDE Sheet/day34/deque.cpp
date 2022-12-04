#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> ans = {{}, {}, {}};
    ans.back().push_back(6);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j;
        }
    }

    return 0;
}
