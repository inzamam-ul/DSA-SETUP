#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    
    for (int i = 0; i < n; i++){
         nums1[m+i] = nums2[i];
    }
    sort(nums1.begin(), nums1.end());


}

int main(int argc, char const *argv[])
{
    vector<int>nums1 = {0};
    // vector<int>nums1 = {1,2,3,0,0,0};
    int m = 0;
    // vector<int> nums2 = {2,5,6};
    vector<int> nums2 = {1};
    int n = 1;

    merge(nums1, m, nums2, n);

    for(auto it: nums1){
        cout << it;
    }


    return 0;
}
