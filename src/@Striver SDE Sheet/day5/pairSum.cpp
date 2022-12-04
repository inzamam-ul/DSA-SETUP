#include <bits/stdc++.h> 
using namespace std;

vector<int> pairSum(vector<int> &arr, int s){

    vector<int> ans;
    unordered_map<int, int> mpp;
    for(int i=0; i<arr.size(); i++){
        if(mpp.find(s-arr[i]) != mpp.end()){
            ans.push_back(mpp[s-arr[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[arr[i]] = i;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {2, -3, 3, 3, -2};
    vector<vector<int>> pairs;
// pairs = pairSum(vec, 0);
//     for(auto row: pairs){
//         cout << row[0] << " " << row[1] << endl;
//     }
//     return 0;
}
