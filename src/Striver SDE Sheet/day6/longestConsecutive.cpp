#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.size() == 0){
        return 0;
    }
    int count = 1;
    int maxCount = 1;
    sort(nums.begin(), nums.end());
    for(int i = 0; i<nums.size(); i++){

        if(i>0 && (nums[i] == nums[i-1] + 1)){
            count++;
        }else if(i>0 && (nums[i] == nums[i-1])){

        }else{
            count = 1;
        }

        maxCount = max(maxCount,count);
    }


    return maxCount;      
}