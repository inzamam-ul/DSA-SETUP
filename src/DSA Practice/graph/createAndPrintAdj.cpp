#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    vector<vector<int>> ans(5, vector<int>());
    for (int i = 0; i < 5; i++)
    {
        int u = 1;
        int v = 2;
        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    return 0;
}
