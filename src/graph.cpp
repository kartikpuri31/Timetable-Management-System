

#include "graph.hpp"
#include <iostream>
using namespace std;

Graph::Graph(int vertices)
{
    this->vertices = vertices;
    adj.resize(vertices);
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::displayGraph() const
{
    cout << "\nGraph Adjacency List:\n";

    for (int i = 0; i < vertices; i++)
    {
        cout << i << " -> ";

        for (int j : adj[i])
        {
            cout << j << " ";
        }

        cout << endl;
    }
}

vector<int> Graph::greedyColoring() const
{
    vector<int> color(vertices, -1);

    if (vertices == 0)
        return color;

    color[0] = 0;

    vector<bool> available(vertices, true);

    for (int u = 1; u < vertices; u++)
    {
        for (int neighbour : adj[u])
        {
            if (color[neighbour] != -1)
            {
                available[color[neighbour]] = false;
            }
        }

        int c;

        for (c = 0; c < vertices; c++)
        {
            if (available[c])
                break;
        }

        color[u] = c;

        fill(available.begin(), available.end(), true);
    }

    return color;
}

