#include <iostream>
#include <stack>
using namespace std;

void DFS(int **adjMatrix, int numVertices, int startVertex) {
    bool *visited = new bool[numVertices];
    for(int i = 0; i < numVertices; i++) {
        visited[i] = false;
    }
    stack<int> s;
    s.push(startVertex);
    visited[startVertex] = true;
    cout << "Pushed: " << startVertex << endl;
    while(!s.empty()) {
        int currVertex = s.top();
        bool found = false;
        for(int i = 0; i < numVertices; i++) {
            if(adjMatrix[currVertex][i] == 1 && !visited[i]) {
                s.push(i);
                visited[i] = true;
                cout << "Pushed: " << i << endl;
                found = true;
                break;
            }
        }
        if(!found) {
            s.pop();
            cout << "Popped: " << currVertex << endl;
        }
    }
    delete[] visited;
}

int main() {
    int numVertices, startVertex;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;
    int **adjMatrix = new int*[numVertices];
    for(int i = 0; i < numVertices; i++) {
        adjMatrix[i] = new int[numVertices];
        for(int j = 0; j < numVertices; j++) {
            adjMatrix[i][j] = 0;
        }
    }
    cout << "Enter the adjacency matrix:\n";
    for(int i = 0; i < numVertices; i++) {
        for(int j = 0; j < numVertices; j++) {
            cin >> adjMatrix[i][j];
        }
    }
    cout << "Enter the starting vertex: ";
    cin >> startVertex;
    DFS(adjMatrix, numVertices, startVertex);
    for(int i = 0; i < numVertices; i++) {
        delete[] adjMatrix[i];
    }
    delete[] adjMatrix;
    return 0;
}

