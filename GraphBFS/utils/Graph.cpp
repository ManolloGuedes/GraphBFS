//
// Created by manollo-guedes on 04/09/18.
//

#include "Graph.h"

Graph::Graph() {}

Graph::Graph(int nVertices) {
    this->setNumberOfVertices(nVertices);
    this->instantiatePAdjacencyList(nVertices);
}

void Graph::setNumberOfVertices(int nVertices) {
    this->numberOfVertices = nVertices;
}

void Graph::instantiatePAdjacencyList(int nVertices) {
    pAdjacencyList = new list<int>[nVertices];
}

//Insert an edge between two vertices
void Graph::addEdge(int from, int to) {
    //Add an reference to 'to' vertice on 'from' adjacency list
    pAdjacencyList[from].push_back(to);
}

//
void Graph::BFSCalculate(int source) {
    // Mark all the vertices as not visited
    bool *visited = new bool[this->numberOfVertices];
    for(int i = 0; i < this->numberOfVertices; i++) {
        visited[i] = false;
    }

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[source] = true;
    queue.push_back(source);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;

    while(!queue.empty()) {
        // Dequeue a vertex from queue and print it
        source = queue.front();
        cout << source << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = this->pAdjacencyList[source].begin(); i != this->pAdjacencyList[source].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}