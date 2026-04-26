// Problem: Graph Adjacency Matrix

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 4; // number of nodes
    vector<vector<int>> adjMat(n, vector<int>(n, 0));
    
    // Edges based on example 0-1, 0-2, 0-3, etc. Just demo edges
    auto addEdge = [&](int u, int v) {
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    };
    
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(0, 3);
    addEdge(1, 2);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << adjMat[i][j] << " ";
        cout << endl;
    }
    return 0;
}
