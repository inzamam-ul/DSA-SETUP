#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
   int lo = 0;
   int mid = 0;
   int hi = n-1;

   while(mid <= hi){
       switch (arr[mid])
       {
       case 0:
           swap(arr[mid++], arr[lo++]);
           break;
       case 1:
            mid++;
           break;
       case 2:
           swap(arr[mid], arr[hi--]);
           break;
       
       }
   }

}

int main(int argc, char const *argv[])
{
    int a[] = {0, 1, 2, 2, 1, 0};
    sort012(a,6);
    for(int i=0; i < 6; i++){
        cout << a[i] << " ";
    }
    return 0;
}
