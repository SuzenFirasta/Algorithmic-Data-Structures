#include <iostream>

using namespace std;

const int MAX = 100;

int graph[MAX][MAX];
int tc[MAX][MAX];

void warshall(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tc[i][j] = graph[i][j];
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (tc[i][k] && tc[k][j]) {
                    tc[i][j] = 1;
                }
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes in the graph: ";
    cin >> n;

    cout << "Enter the adjacency matrix of the graph:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    warshall(n);

    cout << "The transitive closure of the graph is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << tc[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

