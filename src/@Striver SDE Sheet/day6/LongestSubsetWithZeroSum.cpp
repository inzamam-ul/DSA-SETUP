#include <bits/stdc++.h>
using namespace std; 

int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map<int, int> mpp;
    int sum = 0;
    int maximumLength = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum == 0){
            maximumLength = i + 1;
        }else{
            if(mpp.find(sum) != mpp.end()){
                maximumLength = max(maximumLength, i-mpp[sum]);
            }else{
                mpp[sum] = i;
            }
        }
    }

    return maximumLength;

}