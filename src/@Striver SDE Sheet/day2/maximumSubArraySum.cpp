#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n, vector < int > & subarray){
    long long max_sum = 0, sum = 0;
    int s = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > max_sum){
            subarray.clear();
            max_sum = sum;
            subarray.push_back(s);
            subarray.push_back(i);
        }
        if(sum < 0){
            sum = 0;
            s = i + 1;
        }
    }


    return max_sum;
}


int main(int argc, char const *argv[])
{
    int arr2[] = {1,2,7,-4,3,2,-10,9,1};
    // int arr2[] = {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10};
    vector<int> subarray;
    long long max = maxSubarraySum(arr2, 9, subarray);
    cout << max << endl;
    for (int i = subarray[0]; i <= subarray[1]; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
