#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    ListNode *next;
    int val;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int in)
    {
        val = in;
        next = NULL;
    }
    ListNode(int in, ListNode *n)
    {
        val = in;
        next = n;
    }
};

vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
{
    int i = 0, j = 0, cur_d = 0, d[5] = {0, 1, 0, -1, 0};
    vector<vector<int>> res(m, vector<int>(n, -1));
    for (; head != nullptr; head = head->next)
    {
        res[i][j] = head->val;
        int ni = i + d[cur_d], nj = j + d[cur_d + 1];
        if (min(ni, nj) < 0 || ni >= m || nj >= n || res[ni][nj] != -1)
        {
            cur_d = (cur_d + 1) % 4;
        }
        i += d[cur_d];
        j += d[cur_d + 1];
    }
    return res;
}


int main(int argc, char const *argv[])
{
    string s = "hello world";
    swap(s[0], s[3]);
    for(auto it: s)cout << it;
    
    return 0;
}