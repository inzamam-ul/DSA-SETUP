#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int node, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited)
{
    unordered_map<int, int> parent;
    parent[node] = -1;
    visited[node] = true;
    queue<int> q;
    q.push(node);
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        for (auto i : adj[frontNode])
        {
            if (visited[i] == true && i != parent[frontNode])
            {
                return true;
            }
            else if (!visited[i])
            {
                visited[i] = true;
                q.push(i);
                parent[i] = frontNode;
            }
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>> &edges, int n, int m)
{
    // creating adj list
    unordered_map<int, list<int>> adj;
    for (auto edge : edges)
    {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    unordered_map<int, bool> visited;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            bool ans = isCyclic(i, adj, visited);
            if (ans == 1)
                return "Yes";
        }
    }
    return "No";
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> edges = {{3, 2}, {1, 2}, {2, 3}};
    int n = 3, m = 3;
    string ans = cycleDetection(edges, n, m);
    cout << ans;
    return 0;
}
