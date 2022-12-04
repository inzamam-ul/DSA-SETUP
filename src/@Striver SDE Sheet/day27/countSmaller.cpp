#include <bits/stdc++.h>
using namespace std;

void countSmaller(vector<int> &nums, vector<int> &ans, int &count, int i)
{
    if (i == nums.size() - 1)
    {
        ans[i] = 0;
        return;
    }
    countSmaller(nums, ans, count, i + 1);
    if (nums[i] > nums[i + 1])
    {
        count++;
        ans[i] = count;
    }else{
        ans[i] = count;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {5, 2, 6, 1};
    vector<int> ans(nums.size());
    int count = 0;
    countSmaller(nums, ans, count, 0);

    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
