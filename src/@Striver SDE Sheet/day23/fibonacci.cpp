#include <bits/stdc++.h>
using namespace std;

int helper(int n, unordered_map<int, int> &memo)
{
    int f;
    if (memo.find(n) != memo.end())
    {
        return memo[n];
    }
    else
    {
        f = helper(n - 1, memo) + helper(n - 2, memo);
        memo[n] = f;
    }
    return f;
}

int fib(int n)
{
    unordered_map<int, int> memo;
    memo[0] = 0;
    memo[1] = 1;
    int f;
    return helper(n, memo);
}



int main(int argc, char const *argv[])
{
    int ans = fib(30);
    cout << ans;
    return 0;
}
