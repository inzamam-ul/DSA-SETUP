#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int i, int j)
{
    if (i > j)
        return;
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s, i, j);
}

int main(int argc, char const *argv[])
{
    // string st = "Inzamam";
    // reverse(st, 0, st.size() - 1);
    // cout << st;

    vector<vector<int>> visited(3, vector<int>(3, 4));

    for (auto row : visited)
    {
        for (auto col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
