#include <iostream>

using namespace std;

const int MAXN = 1005;
int adj[MAXN][MAXN], key[MAXN], parent[MAXN], V;

void primMST()
{
    bool visited[MAXN] = {false}; // keeps the track of vertices that has been added to MST

    for (int i = 1; i <= V; i++) {
        key[i] = INT_MAX;
        visited[i] = false;
    }

    key[1] = 0;
    parent[1] = -1;

    for (int i = 1; i < V; i++) {
        int u, min_key = INT_MAX;
        for (int v = 1; v <= V; v++) {
            if (!visited[v] && key[v] < min_key) {
                u = v;
                min_key = key[v];
            }
        }
        visited[u] = true;
        for (int v = 1; v <= V; v++) {
            if (adj[u][v] && !visited[v] && adj[u][v] < key[v]) {  // to avoid creating a cycle and it ensures that the edge weight is not 0
                parent[v] = u;
                key[v] = adj[u][v];
            }
        }
    }

    cout << "Minimum Spanning Tree: " << endl;
    for (int i = 2; i <= V; i++) {
        cout << parent[i] << " - " << i << " : " << adj[parent[i]][i] << endl;
    }
}

int main()
{
    int E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;
	
	// An adjacency matrix adj of size MAXN x MAXN is created and initialized to all zeros.
	
    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            adj[i][j] = 0;
        }
    }

    cout << "Enter the edges and their weights: " << endl;
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = adj[v][u] = w;
    }

    primMST();

    return 0;
}

