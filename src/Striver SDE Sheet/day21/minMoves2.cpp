#include <bits/stdc++.h>
using namespace std;

int minMoves2(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int median = n%2==0 ? (nums[n/2] + nums[n/2-1]) / 2 : nums[n/2];
    int steps = 0;

    for(int i = 0; i < n; i++){
        steps += abs(median - nums[i]);
    }
    return steps;
}
