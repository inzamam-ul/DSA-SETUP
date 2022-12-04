#include <bits/stdc++.h>
using namespace std;

long long zeroFilledSubarray(vector<int> &nums)
{
    unordered_map<int, int> mp;
    long long sum = 0, ans = 0;
    mp[sum] = 1;
    for (auto it : nums)
    {
        // if(it>=0){
        sum += abs(it);
        int find = sum - 0;
        if (mp.find(find) != mp.end())
        {
            ans += mp[find];
        }
        mp[sum]++;
        // }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // vector<int> nums = {0, -9, 6, -5, 0, 0, 8, 0, 0, 3, -3};
    // vector<int> nums = {1, 3, 0, 0, 2, 0, 0, 4};
    vector<int> nums = {0, 12, 0, 12, 0, -8, 0, -18, 0, -11, 0};
    // vector<int> nums = {0, 12, 0, 12, 0, -8, 0, -18, 0, -11, 0};
    long long ans = zeroFilledSubarray(nums);
    cout << ans;
}
