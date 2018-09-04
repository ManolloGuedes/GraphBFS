//
// Created by manollo-guedes on 04/09/18.
//

#ifndef GRAPHBFS_GRAPH_H
#define GRAPHBFS_GRAPH_H

#include <iostream>
#include <list>

using namespace std;

class Graph {
    //No. of vertices
    int numberOfVertices;

    //Pointer to adjacency list
    list<int> *pAdjacencyList;

public:
    //Constructor of graph
    Graph(int nVertices);

    //Insert an edge between two vertices
    void addEdge(int from, int to);

    //
    void BFSCalculate(int source);
};



#endif //GRAPHBFS_GRAPH_H
