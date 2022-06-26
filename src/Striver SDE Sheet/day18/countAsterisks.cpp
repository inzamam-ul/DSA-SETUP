#include <bits/stdc++.h>
using namespace std;


int countAsterisks(string s) {
    bool isPair = true;
    int count = 0;
    for(auto it: s){
        if(it == '|'){
            isPair = !isPair;
        }

        if(isPair){
            if(it == '*'){
                count ++;
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    string s = "yo|uar|e**|b|e***au|tifu|l";
    int res = countAsterisks(s);
    cout << res;
    return 0;
}
