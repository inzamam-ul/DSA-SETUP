#include <bits/stdc++.h>
using namespace std;

bool binSearch(vector<int> &arr, int s, int e, int k)
{
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
        return true;

    if (arr[mid] > k)
    {
        return binSearch(arr, s, mid - 1, k);
    }
    else
    {
        return binSearch(arr, mid + 1, e, k);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 3, 4, 6, 7, 9, 12, 14, 18, 22};
    int n = arr.size();
    int key = 13;
    string ans = binSearch(arr, 0, n - 1, key) ? "Present" : "Not present";
    cout << ans;
    return 0;
}
