#include <bits/stdc++.h>
using namespace std;

int minPartitions(string n) {
    char s = '0';
    for(int i = 0; i < n.size(); i++){
        if(n[i] > s){
            s = n[i];
        }
    }
    
    return s-'0';
}

int main(int argc, char const *argv[])
{
    string n = "32";
    int res = minPartitions(n);
    cout << res;
    return 0;
}
