#include <bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int> &nums)
{
    int ans = 0;
    sort(nums.begin(), nums.end());

    int i = 0;

    while (i < nums.size())
    {
        // for (int j = 0; j < nums.size(); j++)
        // {
        //     cout << nums[j] << " ";
        // }
        // cout << endl;

        if (nums[i] != 0)
        {
            ans += 1;
            int temp = nums[i];
            for (int j = i; j < nums.size(); j++)
            {
                nums[j] = nums[j] - temp;
            }

        }
        while (nums[i] == 0)
            i++;
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1};

    int ans = minimumOperations(nums);
    cout << ans;

    return 0;
}
