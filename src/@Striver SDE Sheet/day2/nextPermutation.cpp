#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n){
    int index1, index2;
    for(index1 = n-2; index1 >= 0; index1--){
        if(permutation[index1] < permutation[index1+1]){
            break;
        }
    }

    if(index1 < 0){
        reverse(permutation.begin(), permutation.end());
    }else{
        for(index2 = n-1; index2 >= 0; index2--){
            if(permutation[index2] > permutation[index1]){
                break;
            }
        }

        swap(permutation[index1], permutation[index2]);
        reverse(permutation.begin() + index1 + 1, permutation.end());
    }
    return permutation;
}

int main(int argc, char const *argv[])
{
    vector<int> p = {3,2,1};

    vector<int> next_permu = nextPermutation(p,3);

    for(auto it: next_permu){
        cout << it;
    }
    return 0;
}
