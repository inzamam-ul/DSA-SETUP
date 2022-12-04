#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Enter the number of nodes: " << endl;
    cin >> n;
    cout << "Enter the Number of edges: " << endl;
    cin >> m;

    Graph g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    g.printAdjList();

    return 0;
}

// 0 1
// 1 2
// 3 1
// 3 4
// 0 4
// 2 3