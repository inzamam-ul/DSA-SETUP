#include <bits/stdc++.h>
using namespace std;

long long binSearch(int num)
{
    int start = 0, end = num;
    long long mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        long long sqr = mid * mid;
        if (sqr == num)
        {
            return mid;
        }

        if (sqr < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int sqrt, int precision, int num){
    double factor = 1;
    double ans = sqrt;

    for(int i = 0; i<precision; i++){
        factor = factor/10;
        for(double j = ans; j*j < num; j = j+factor){
            ans = j;
        }
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    double sqrt = binSearch(101);
    sqrt = morePrecision(sqrt, 3, 101);
    
    cout << "Square root of 37: " << sqrt;
    return 0;
}
