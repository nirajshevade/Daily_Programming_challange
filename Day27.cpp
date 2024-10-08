#include<iostream>
using namespace std;

struct Node {
    int vertex;
    int distance;
    Node* next;
};

struct Queue {
    Node* front;
    Node* rear;

    Queue() {
        front = rear = nullptr;
    }

    void push(int v, int dist) {
        Node* newNode = new Node();
        newNode->vertex = v;
        newNode->distance = dist;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void pop() {
        if (front != nullptr) {
            Node* temp = front;
            front = front->next;
            if (front == nullptr)
                rear = nullptr;
            delete temp;
        }
    }

    bool empty() {
        return front == nullptr;
    }

    int getFrontVertex() {
        return front->vertex;
    }

    int getFrontDistance() {
        return front->distance;
    }
};

int shortestPath(int V, int edges[][2], int E, int start, int end) {
    int** adj = new int*[V];
    for (int i = 0; i < V; i++) {
        adj[i] = new int[V];
        for (int j = 0; j < V; j++) {
            adj[i][j] = 0;
        }
    }

    for (int i = 0; i < E; i++) {
        adj[edges[i][0]][edges[i][1]] = 1;
        adj[edges[i][1]][edges[i][0]] = 1;
    }

    int* visited = new int[V];
    for (int i = 0; i < V; i++) visited[i] = 0;

    Queue q;
    q.push(start, 0);
    visited[start] = 1;

    while (!q.empty()) {
        int node = q.getFrontVertex();
        int dist = q.getFrontDistance();
        q.pop();

        if (node == end) {
            return dist;
        }

        for (int i = 0; i < V; i++) {
            if (adj[node][i] == 1 && visited[i] == 0) {
                q.push(i, dist + 1);
                visited[i] = 1;
            }
        }
    }

    return -1;
}

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    int edges[E][2];
    cout << "Enter the edges (pair of vertices):\n";
    for (int i = 0; i < E; i++) {
        cout << "Edge " << i + 1 << ": ";
        cin >> edges[i][0] >> edges[i][1];
    }

    int start, end;
    cout << "Enter start vertex: ";
    cin >> start;
    cout << "Enter end vertex: ";
    cin >> end;

    cout << "Shortest path length: " << shortestPath(V, edges, E, start, end) << endl;
    return 0;
}
