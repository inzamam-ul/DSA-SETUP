#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    vector<vector<int>> grid = {{3, 2, 1},
                                {2, 7, 6},
                                {2, 7, 7}};

    map<vector<int>, int> mp1, mp2;

    for (int i = 0; i < grid.size(); i++)
    {
        mp1[grid[i]]++;
    }

    for (int i = 0; i < grid.size(); i++)
    {
        vector<int> temp;
        for (int j = 0; j < grid[0].size(); j++)
        {
            temp.push_back(grid[j][i]);
        }
        mp2[temp]++;
    }

    int ans = 0;

    for (auto it : mp1)
    {
        for (auto it2 : mp2)
        {
            if (it.first == it2.first)
            {
                cout << it.second << " " << it2.second << endl;
                ans += (it.second * it2.second);
            }
        }
    }

    cout << ans;
    return 0;
}
