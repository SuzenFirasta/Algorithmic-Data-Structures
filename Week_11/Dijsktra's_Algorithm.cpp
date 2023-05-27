#include <iostream>

using namespace std;

// maximum number of vertices
#define MAX_VERTICES 100

// structure to represent a node in the graph
struct Node {
    int vertex;  // vertex index
    int distance;  // distance from source vertex
};

// function to find the shortest path from a given source vertex to all other vertices
void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int num_vertices, int source) {
    // create a visited array to keep track of visited vertices
    bool visited[MAX_VERTICES] = { false };

    // create a distance array to store the minimum distance from the source vertex to each vertex
    int distance[MAX_VERTICES];
    for (int i = 0; i < num_vertices; i++) {
        distance[i] = INT_MAX;
    }

    // set the distance of the source vertex to 0
    distance[source] = 0;

    // create a priority queue to store the nodes with the minimum distance
    Node pq[MAX_VERTICES];
    int front = -1, rear = -1;

    // add the source vertex to the priority queue
    pq[++rear] = { source, 0 };

    // loop until the priority queue is empty
    while (front != rear) {
        // get the node with the minimum distance
        Node current = pq[++front];

        // check if the node has already been visited
        if (visited[current.vertex]) {
            continue;
        }

        // mark the node as visited
        visited[current.vertex] = true;

        // update the distance of each adjacent vertex
        for (int i = 0; i < num_vertices; i++) {
            if (graph[current.vertex][i] != 0 && !visited[i]) {
                int new_distance = current.distance + graph[current.vertex][i];
                if (new_distance < distance[i]) {
                    distance[i] = new_distance;
                    // add the adjacent vertex to the priority queue
                    pq[++rear] = { i, new_distance };
                }
            }
        }
    }

    // print the minimum distance from the source vertex to each vertex
    for (int i = 0; i < num_vertices; i++) {
        cout << "Minimum distance from vertex " << source << " to vertex " << i << " is " << distance[i] << endl;
    }
}

// main function
int main() {
    // take input from the user
    int num_vertices, source;
    cout << "Enter the number of vertices: ";
    cin >> num_vertices;
    cout << "Enter the adjacency matrix of the graph:\n";
    int graph[MAX_VERTICES][MAX_VERTICES];
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            cin >> graph[i][j];
        }
    }
    cout << "Enter the source vertex: ";
    cin >> source;

    // find the shortest path from the source vertex to all other vertices
    dijkstra(graph, num_vertices, source);

    return 0;
}

