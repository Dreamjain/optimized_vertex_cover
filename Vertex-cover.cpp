#include <iostream>
#include <vector>
using namespace std;

void vertexCover(int V, vector<pair<int, int>> edges)
{
    vector<bool> visited(V, false);

    cout << "Selected Irrigation Points (Vertex Cover): ";

    for (auto edge : edges)
    {
        int u = edge.first;
        int v = edge.second;

        // If neither endpoint is selected
        if (!visited[u] && !visited[v])
        {
            visited[u] = true;
            visited[v] = true;

            cout << u << " " << v << " ";
        }
    }
}

int main()
{
    int V = 6; // number of vertices (fields)

    // edges represent water connections
    vector<pair<int, int>> edges = {
        {0, 1},
        {0, 2},
        {1, 3},
        {2, 3},
        {3, 4},
        {4, 5}
    };

    vertexCover(V, edges);

    return 0;
}