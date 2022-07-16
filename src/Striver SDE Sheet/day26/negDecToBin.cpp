#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    n = abs(n);
    string ans = "";
    int i = 0;
    int range = 8;

    while (range != 0)
    {
        int bit = n & 1;
        ans += to_string(!bit);
        n = n >> 1;
        i++;
        range--;
    }
    

    // 2's compliment
    //  ans[0] = '0';
    //  ans[1] = '1';
    int carry = 1;
    for (int j = 0; j < 8; j++)
    {
        if (carry == 1 && ans[j] == '1')
        {
            ans[j] = '0';
        }else if (carry && ans[j] == '0')
        {
            ans[j] = '1';
            carry--;
        }
    }

    for (int i = 7; i >= 0; i--)
    {
        cout << ans[i];
    }

    return 0;
}
