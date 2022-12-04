#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    if(nums.empty() == 0) return res;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i = 0; i<n; i++){
        int target3 = target - nums[i];
        for(int j = i+1; j < n; j++){
            int target2 = target3-nums[j];
            int low  = j+1;
            int high = n-1;

            while(low<high){
                int two_sum = nums[low] + nums[high];

                if(two_sum < target2) low++;
                else if(two_sum > target2) high--;
                else{
                    vector<int> quadruplet(4,0);
                    quadruplet[0] = nums[i];
                    quadruplet[1] = nums[j];
                    quadruplet[2] = nums[low];
                    quadruplet[3] = nums[high];
                    res.push_back(quadruplet);

                    while(low < high && nums[low] == quadruplet[2]) ++low;
                    while(low < high && nums[high] == quadruplet[3]) --high;
                }

            }

            while(j+1 < n && nums[j+1] == nums[j]) ++j;

        }

        while(i+1 < n && nums[i+1] == nums[i]) ++i;

    }

    return res;
}