#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maxi = 0;

    for(auto it: nums){
        if(it == 1){
            count++;
        }else{
            count = 0;
        }
        maxi = max(count, maxi);
    }
    return maxi;
}
