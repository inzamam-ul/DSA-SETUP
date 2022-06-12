#include <bits/stdc++.h>
using namespace std;

int maximumUniqueSubarray(vector<int>& nums) {
    unordered_map<int,int> idx;
    int n = nums.size();
    int ans = 0;
    vector<int> prefix(n+1, 0);

    int left = -1;
    for(int i = 0; i<n; i++){
        //build prefix on-the-fly
        prefix[i+1] = prefix[i] + nums[i];

        // pick left index untill elements are unique
        if(idx.count(nums[i]) > 0 && left < idx[nums[i]]) left = idx[nums[i]];

        //update map with latest index of element
        idx[nums[i]] = i;

        //use prefix array to calculate the sum in O(1)
        ans = max(ans, prefix[i+1] - prefix[left+1]);
    }

    return ans;
}