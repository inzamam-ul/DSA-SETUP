#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    vector<int> first(len1);
    vector<int> second(len2);

    int mainArrInd = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrInd++];
    }

    mainArrInd = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrInd++];
    }

    int index1 = 0, index2 = 0;
    mainArrInd = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrInd++] = first[index1++];
        }
        else
        {
            arr[mainArrInd++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrInd++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrInd++] = second[index2++];
    }
}

void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {21, 4, 9, 2, 6, 1, 4, 3, 8, 7, 14, 12, 18};
    mergeSort(nums, 0, nums.size() - 1);

    for (int i : nums)
    {
        cout << i << " ";
    }

    return 0;
}
