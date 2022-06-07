#include <bits/stdc++.h>
using namespace std;


pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    long long int len = (long long int)n;
    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<len; i++){
       S -= (long long int)arr[i];
       P -= (long long int)arr[i]*(long long int)arr[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;
    pair <int, int> p;
    p.first = (int)missingNumber;
    p.second =(int)repeating;
    return p;
}
