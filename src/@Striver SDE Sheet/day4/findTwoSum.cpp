#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0; 
        int j = numbers.size() - 1;
        vector<int> ans;
        while(j > i){
            if(numbers[i] + numbers[j] == target){
                ans = {i+1, j+1};
                return ans;
            }
            if(numbers[i] + numbers[j] > target){
                j--;
            }else{
                i++;
            }
        }
        return ans;

}