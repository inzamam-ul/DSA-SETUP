#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> elementToCount;
    for (int i = 0; i < arr.size(); i++)
    {
        elementToCount[arr[i]]++;
    }

    unordered_map<int, int> seen;

    for (auto it : elementToCount)
    {
        cout << it.first << " " << it.second << endl;
        if (seen.find(it.second) != seen.end())
        {
            return false;
        }
        seen[it.second]++;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    bool ans = uniqueOccurrences(arr);
    cout << ans;

    return 0;
}
