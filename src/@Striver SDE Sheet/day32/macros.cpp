#include <bits/stdc++.h>
using namespace std;

#define min(a, b) ((a < b) ? a : b)

#define PI 3.1416

#define area(r) (PI * (r * r))

int main(int argc, char const *argv[])
{
    int i = 9, j = 19;
    cout << "Min element is: " << min(i, j) << endl;

    int r = 4;
    cout << "Area is: " << area(r) << endl;

    return 0;
}

/*
    Time complexity: O(log10(N))
    Space complexity: O(log10(N))

    where N is the input number.
*/

int countSpecialNumbers(int n)
{
    // Making the digits array to store each digit of n
    vector<int> digits;
    while (n)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
    reverse(digits.begin(), digits.end());

    int d = digits.size();

    // Finding the count of special numbers having less than d digits
    int res = (5 * (pow(5, d - 1) - 1)) / 4;

    int specialNumbersFound = 0;

    // Iterating through each digit
    for (int i = 0; i < d; i++)
    {
        // Handling the base case
        if (i == d - 1)
        {
            specialNumbersFound += min(5, digits[d - 1]);
            break;
        }

        // Handling different cases according to the value of current digit
        if (digits[i] == 0)
        {
            break;
        }
        else if (digits[i] > 5)
        {
            specialNumbersFound += pow(5, d - i);
            break;
        }
        else
        {
            specialNumbersFound += ((digits[i] - 1) * pow(5, d - i - 1));
        }
    }

    // Returning the final answer
    return res + specialNumbersFound;
}