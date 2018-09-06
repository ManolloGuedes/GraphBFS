//
// Created by manollo-guedes on 04/09/18.
//

#ifndef GRAPHBFS_GRAPH_H
#define GRAPHBFS_GRAPH_H

#include <iostream>
#include <list>
#include "Node.h"

using namespace std;

class Graph {
    vector< Node* > node;
public:

    Graph(int size);

    void add_edge(int nodeA,int nodeB);

    void BFS(int source);

    static bool nodeCompare(Node* nodeA, Node* nodeB);

    void deallocateMemory();
};



#endif //GRAPHBFS_GRAPH_H
