
#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
using namespace std;

class Graph
{
private:
    int vertices;
    vector<vector<int>> adj;

public:
    Graph(int vertices);

    void addEdge(int u, int v);
    void displayGraph() const;
    vector<int> greedyColoring() const;
};

#endif

