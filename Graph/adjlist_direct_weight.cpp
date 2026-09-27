#include<bits/stdc++.h>
using namespace std;

int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    vector<pair<int, int>> adjList[vertex];

    int u, v, weight;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v >> weight;
        adjList[u].push_back({v, weight}); // Only u -> v (directed)
    }

    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (auto it : adjList[i]) {
            cout << it.first << " (" << it.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
