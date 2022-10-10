#include <bits/stdc++.h>
using namespace std;

// int partition2(vector<int> &a, int start, int end)
// {
//     int pivot = a[start];
//     int i = start;
//     for (int j = start; j <= end; j++)
//     {
//         if (a[j] < pivot)
//         {
//             i += 1;
//             swap(a[i], a[j]);
//         }
//         swap(a[start], a[i]);
//     }
//     return i;
// }

int partition(vector<int> &arr, int s, int e)
{

    int pivot = arr[s];

    int i = s, j = e;

    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[s], arr[j]);

    return j;
}

void quickSort(vector<int> &arr, int s, int e)
{
    // if array is empty or having one element
    if (s >= e)
        return;

    // getting partition point
    int partitionIndex = partition(arr, s, e);

    // sorting left part
    quickSort(arr, s, partitionIndex - 1);

    // sorting right part
    quickSort(arr, partitionIndex + 1, e);
}

int main(int argc, char const *argv[])
{
    // vector<int> nums = {21, 4, 9, 2, 6, 1, 4, 3, 8, 7, 14, 12, 18};
    vector<int> nums = {5, 2, 3, 1};
    // vector<int> nums = {-74, 48, -20, 2, 10, -84, -5, -9, 11, -24, -91, 2, -71, 64, 63, 80, 28, -30, -58, -11, -44, -87, -22, 54, -74, -10, -55, -28, -46, 29, 10, 50, -72, 34, 26, 25, 8, 51, 13, 30, 35, -8, 50, 65, -6, 16, -2, 21, -78, 35, -13, 14, 23, -3, 26, -90, 86, 25, -56, 91, -13, 92, -25, 37, 57, -20, -69, 98, 95, 45, 47, 29, 86, -28, 73, -44, -46, 65, -84, -96, -24, -12, 72, -68, 93, 57, 92, 52, -45, -2, 85, -63, 56, 55, 12, -85, 77, -39};

    quickSort(nums, 0, nums.size() - 1);

    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}
