#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
vector<int> nodeComponent;
vector<int> componentCount;
int component = 0;

// Utility function that returns the number of nodes in a component
int dfs(int s)
{
    visited[s] = true;

    int count = 0;

    // Node 's' belong to this 'component' component
    nodeComponent[s] = component;

    // Travel through its adjacents
    for (int adj : graph[s])
    {
        if (visited[adj] == false)
        {
            // Update the count of nodes in this component
            count += dfs(adj);
        }
    }

    // Total count of nodes is equal to count of nodes to its adjacent plus this current node 's'
    return count + 1;
}

// Utility function for initialization
void init(int n)
{
    graph.resize(n);
    visited.resize(n);
    nodeComponent.resize(n);
    componentCount.resize(n);
    component = 0;

    for (int i = 0; i < n; i++)
    {
        graph[i].clear();
        visited[i] = false;
        nodeComponent[i] = -1;
        componentCount[i] = 0;
    }
}

vector<int> countNodes(int n, int m, vector<vector<int>> &edges)
{
    init(n);

    // Run a loop from 0 to 'm'
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        // Add edge u - v in graph
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // Run a loop from 0 to 'n'
    for (int i = 0; i < n; i++)
    {
        // If vertex is not visited
        if (visited[i] == false)
        {
            // Perform dfs call
            int count = dfs(i);

            // Store the count of nodes in componentCount arry for that particular component
            componentCount[component] = count;

            // Increament component by one
            component++;
        }
    }

    // Take an array 'ans' to store the answer.
    vector<int> ans(n);

    // Run a loop from 0 to 'n'
    for (int i = 0; i < n; i++)
    {
        // Store the componentCount of nodeComponent[i] in ans[i]
        ans[i] = componentCount[nodeComponent[i]];
    }

    // Return 'ans'
    return ans;
}