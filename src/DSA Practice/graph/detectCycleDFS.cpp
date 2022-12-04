#include <bits/stdc++.h>
using namespace std;

bool isCyclicDFS(int node, int parent, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited)
{
    visited[node] = true;
    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            bool cycle = isCyclicDFS(neighbour, node, adj, visited);
            if (cycle)
                return true;
        }
        else if (visited[neighbour] && neighbour != parent)
        {
            return true;
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
            bool ans = isCyclicDFS(i, -1, adj, visited);
            if (ans == 1)
                return "Yes";
        }
    }
    return "No";
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> edges = {{3, 4}, {1, 2}, {2, 3}, {4, 1}};
    int n = 4, m = 4;
    string ans = cycleDetection(edges, n, m);
    cout << ans;
    return 0;
}
