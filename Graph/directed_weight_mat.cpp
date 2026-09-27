#include<bits/stdc++.h>
using namespace std;

// adjacency matrix
// directed weighted graph

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;

    vector<vector<int>> adjMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight; // u -> v with weight w
        adjMat[u][v] = weight;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}