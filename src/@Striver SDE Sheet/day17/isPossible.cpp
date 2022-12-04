#include <bits/stdc++.h>
using namespace std;


bool checkPossibility(vector<int>& nums) {
    int count = 0;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i-1] > nums[i]){
            count++;
            if(i-2 < 0 || nums[i-2] <= nums[i])nums[i-1] = nums[i];
            else nums[i] = nums[i-1];
            
        }
        cout << count << endl;
    }
    
    return count <= 1;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {4,2,1};

    bool res = checkPossibility(nums);
    cout << res;
    return 0;
}
