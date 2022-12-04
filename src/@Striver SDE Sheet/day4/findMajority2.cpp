#include <bits/stdc++.h> 
using namespace std;

vector<int> majorityElementII(vector<int> &nums)
{
    int count1=0;
    int count2=0;
    int majorElement1 = 0;
    int majorElement2 = 0;
    int n = nums.size();
    vector<int> majors;

    for(int i = 0; i < n; i++){
        if(nums[i] == majorElement1){
            count1++;
        }else if(nums[i] == majorElement2){
            count2++;
        }else if(count1 == 0){
            majorElement1 = nums[i];
            count1 = 1;
        }else if(count2 == 0){
            majorElement2 = nums[i];
            count2 = 1;
        }else{
            count1--;
            count2--;
        }


    }
    count1 = 0;
    count2 = 0;
     for(int i = 0; i < n; i++){
         if(majorElement1 == nums[i]){
             count1++;
         }else if(majorElement2 == nums[i]){
             count2++;
         }
    }
    
    if(count1 > n/3){
        majors.push_back(majorElement1);
    }
    if(count2 > n/3){
        majors.push_back(majorElement2);
    }
    

    return majors;
}