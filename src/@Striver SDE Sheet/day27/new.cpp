#include <bits/stdc++.h>
using namespace std;

vector<int> numberOfPairs(vector<int> &nums)
{
    int countOfPair = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1;)
    {
        if(nums.size() == 0) break;
        if (nums[i] == nums[i + 1])
        {
            vector<int>::iterator it = nums.begin() + i;
            nums.erase(it, it + 2);

            countOfPair++;
        }
        else
        {
            i++;
        }
    }
    vector<int> ans;
    int size = nums.size();
    ans.push_back(countOfPair);
    ans.push_back(size);

    return ans;
}

int maximumSum(vector<int> &nums)
{

    int ans = -1;
    unordered_map<int, vector<int>> sumToIndex;
    for (int i = 0; i < nums.size(); i++)
    {
        int digitSum = 0;
        int num = nums[i];
        while (num != 0)
        {
            digitSum += num % 10;
            num = num / 10;
        }
        sumToIndex[digitSum].push_back(nums[i]);
    }

    for (auto it : sumToIndex)
    {
        sort(it.second.begin(), it.second.end(), greater<int>());
        if (it.second.size() > 1)
        {
            ans = max(ans, it.second[0] + it.second[1]);
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    // vector<int> nums = {1, 1};
    // // vector<int>::iterator it = nums.begin() + 0;
    // // cout << *it << *it+ << endl;

    // vector<int> ans = numberOfPairs(nums);
    // for (auto it : ans)
    // {
    //     cout << it;
    // }

    vector<int> nums = {229,398,269,317,420,464,491,218,439,153,482,169,411,93,147,50,347,210,251,366,401};
    int ans = maximumSum(nums);
    cout << "answer: " << ans;
    return 0;
}
