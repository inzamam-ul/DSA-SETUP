#include <bits/stdc++.h>
using namespace std;


int maximumProfit(vector<int> &prices){
    int minPrice = INT_MAX;
    int maxProfit = 0;
     for (auto it: prices){
         minPrice = min(minPrice, it);
         maxProfit = max(maxProfit, it - minPrice);
     }
    return maxProfit;
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {1, 2, 3, 4};
    int maxProf = maximumProfit(vec);
    cout << maxProf;
    return 0;
}
