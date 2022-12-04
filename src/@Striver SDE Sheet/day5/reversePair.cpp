#include <bits/stdc++.h> 
using namespace std;

int merge(vector<int> &nums,int low, int mid, int high){
    int count = 0;
    int j = mid+1;

    for(int i = low; i <= mid; i++){
        while(j<=high && nums[i] > 2LL * nums[j]){
            j++;
        }
        count += (j - (mid+1));
    }

    
  vector < int > t;
  int left = low, right = mid + 1;

  while (left <= mid && right <= high) {

    if (nums[left] <= nums[right]) {
      t.push_back(nums[left++]);
    } else {
      t.push_back(nums[right++]);
    }
  }

  while (left <= mid) {
    t.push_back(nums[left++]);
  }
  while (right <= high) {
    t.push_back(nums[right++]);
  }

  for (int i = low; i <= high; i++) {
    nums[i] = t[i - low];
  }

    return count;

}


int mergeSort(vector<int> &nums, int low, int high){
    if(low>=high) return 0;
    int mid = (low + high) / 2;
    int inversion = mergeSort(nums, low, mid);
    inversion += mergeSort(nums, mid+1, high);
    inversion+=merge(nums, low, mid, high);

    return inversion;
}


int reversePairs(vector<int> &arr, int n){
	return mergeSort(arr, 0, arr.size()-1);
}