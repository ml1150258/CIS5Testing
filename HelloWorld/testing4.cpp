#include <iostream>
#include <list>
#include <stack>
#include <vector>

class Graph {
    int V; // Number of vertices
    std::list<int> *adj; // Pointer to an array containing adjacency lists

public:
    Graph(int V); // Constructor
    void addEdge(int v, int w); // Function to add an edge to graph
    void DFS(int v); // Depth First Traversal starting from vertex v
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int v) {
    std::vector<bool> visited(V, false); // Mark all the vertices as not visited
    std::stack<int> stack;

    // Push the current source node.
    stack.push(v);

    while (!stack.empty()) {
        // Pop a vertex from stack and print it
        v = stack.top();
        stack.pop();

        // Stack may contain same vertex twice. So we need to print the popped item only if it is not visited.
        if (!visited[v]) {
            std::cout << v << " ";
            visited[v] = true;
        }

        // Get all adjacent vertices of the popped vertex v. If an adjacent has not been visited, then push it to the stack.
        for (auto i = adj[v].rbegin(); i != adj[v].rend(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
}

int main() {
    Graph g(5); // Create a graph with 5 vertices
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.addEdge(3, 4);

    std::cout << "Depth First Traversal starting from vertex 2:\n";
    g.DFS(2);

    return 0;
}