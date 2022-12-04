#include <bits/stdc++.h>
using namespace std;

bool comparator(vector<int> a, vector<int> b)
{
    return a[1] > b[1];
}

int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
{
    sort(boxTypes.begin(), boxTypes.end(), comparator);
    int maximumUnit = 0;
    for(auto it: boxTypes){
        if(truckSize > it[0]){
            maximumUnit += it[0]*it[1];
            truckSize -= it[0];
        }else{
            maximumUnit += truckSize*it[1];
            break;
        }
    }
    return maximumUnit;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> boxTypes = {{5, 10}, {2, 5}, {4, 7}, {3, 9}};
    int truckSize = 10;
    int res = maximumUnits(boxTypes, truckSize);
    cout << res;
    return 0;
}
