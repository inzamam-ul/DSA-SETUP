#include <bits/stdc++.h>
using namespace std;

long long countBadPairs(vector<int> &nums)
{
    int n = nums.size();
    // Store the count of the pairs.
    long long cnt = 0;

    // Loop through the first element.
    for (int i = 0; i < n - 1; ++i)
    {
        // Loop through the second element.
        for (int j = i + 1; j < n; ++j)
        {
            // Calculating the sum.
            int cur_sub = nums[j] - nums[i];
            // Increment 'cnt' if current sum is equal to required sum.
            if (cur_sub != j - i)
            {
                cnt++;
            }
        }
    }

    // Return the count of pairs.
    return cnt;
}

int main(int argc, char const *argv[])
{
    // vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> nums = {4, 1, 3, 3};

    long long ans = countBadPairs(nums);

    cout << ans;

    return 0;
}
