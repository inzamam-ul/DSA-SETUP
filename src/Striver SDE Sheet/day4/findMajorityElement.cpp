#include <bits/stdc++.h> 


int findMajorityElement(int arr[], int n) {
	int count=0;
    int majorElement = 0;

    for(int i = 0; i < n; i++){
        if(count == 0){
            majorElement = arr[i];
        }

        if(majorElement == arr[i]){
            count++;
        }else{
            count--;
        }
    }
    return majorElement;
}