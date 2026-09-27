#include<bits/stdc++.h>
using namespace std;

int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    vector<int> adjList[vertex];

    int u, v;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adjList[u].push_back(v); // Only u -> v (directed)
    }

    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (auto it : adjList[i]) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
