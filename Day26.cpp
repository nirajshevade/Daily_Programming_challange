#include <iostream>
using namespace std;

// Node structure for adjacency list
struct Node {
    int vertex;
    Node* next;
};

// Graph structure
struct Graph {
    int V;
    int E;
    Node** adjList; // Array of adjacency lists
    bool* visited;

    // Constructor to initialize graph
    Graph(int V) {
        this->V = V;
        this->E = 0;
        adjList = new Node*[V];
        visited = new bool[V];

        for (int i = 0; i < V; i++) {
            adjList[i] = nullptr;
            visited[i] = false;
        }
    }

    // Destructor to free memory
    ~Graph() {
        for (int i = 0; i < V; i++) {
            Node* current = adjList[i];
            while (current) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] adjList;
        delete[] visited;
    }

    // Add edge to graph
    void addEdge(int u, int v) {
        Node* newNode = new Node();
        newNode->vertex = v;
        newNode->next = adjList[u];
        adjList[u] = newNode;

        newNode = new Node();
        newNode->vertex = u;
        newNode->next = adjList[v];
        adjList[v] = newNode;
    }

    // DFS to detect cycle
    bool DFS(int node, int parent) {
        visited[node] = true; // Mark the current node as visited
        Node* neighbor = adjList[node];

        while (neighbor != nullptr) {
            if (!visited[neighbor->vertex]) {
                if (DFS(neighbor->vertex, node)) {
                    return true; // Cycle detected
                }
            } else if (neighbor->vertex != parent) {
                return true; // If visited neighbor is not parent, cycle found
            }
            neighbor = neighbor->next;
        }
        return false;
    }

    // Check for cycles in the graph
    bool containsCycle() {
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (DFS(i, -1)) {
                    return true; // If a cycle is found
                }
            }
        }
        return false; // No cycle found in any component
    }
};

int main() {
    int V, E;
    cout << "Enter number of vertices (V): ";
    cin >> V;
    cout << "Enter number of edges (E): ";
    cin >> E;

    Graph g(V);

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    // Check if the graph contains a cycle
    if (g.containsCycle()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
