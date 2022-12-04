#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    map<int, int> valueToWeight;
    for (auto it : items1)
    {
        valueToWeight[it[0]] += it[1];
    }

    for (auto it : items2)
    {
        valueToWeight[it[0]] += it[1];
    }

    vector<vector<int>> res;
    for (auto it : valueToWeight)
    {
        vector<int> temp;
        temp.push_back(it.first);
        temp.push_back(it.second);
        res.push_back(temp);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> items1 = {{1, 3}, {2, 2}}, items2 = {{7, 1}, {2, 2}, {1, 4}};
    vector<vector<int>> ans = mergeSimilarItems(items1, items2);
    for (auto it : ans)
    {
        cout << it[0] << " " << it[1] << endl;
    }

    return 0;
}
