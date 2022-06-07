#include <bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int> &arr, int n){
	int tempArray[n];
    for (auto it: arr){
        if(tempArray[it] < it){
            tempArray[it] = it;
        }else{
            return it;
        }
    }
    return 0;
}


int main(int argc, char const *argv[])
{
    	vector<int> tempArray(10);
        for (auto it: tempArray){
        cout << it;
    }
    return 0;
}
