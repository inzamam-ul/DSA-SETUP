#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> dp(10, vector<int>(3, -1));
    // vector<vector<int>> res(m, vector<int>(n, -1));
    // for (int i = 0; i <= 5; i++)
    // {
    //     for (int j = 0; j <= 3; j++)
    //     {
    //         vector<int> newArr = {-1, -1};
    //         dp.push_back(newArr);
    //     }
    // }

    for (int i = 0; i < 10; i++)
    {
        cout << "[";
        for (int j = 0; j < 3; j++)
        {
            cout << dp[i][j];
        }
        cout << "], ";
    }

    return 0;
}
