//
// Created by manollo-guedes on 04/09/18.
//

#include "Graph.h"
#include <algorithm>

Graph::Graph(int size) {
    node.resize(size + 1);
}

void Graph::add_edge(int nodeA,int nodeB) {
    Node* node;
    if(this->node[nodeB] == NULL) {
        node = new Node();
        node->initializateNode(nodeB);
        this->node[nodeB] = node;
    } else {
        node = this->node[nodeB];
    }

    if(this->node[nodeA] == NULL) {
        this->node[nodeA] = new Node();
        this->node[nodeA]->initializateNode(nodeA);
    }
    this->node[nodeA]->addAdjacency(node);
}

void Graph::BFS(int source) {

    //walk on visited vector and initialize it with false

    list<Node*> queue;

    Node* nodeSource = this->node[source];
    nodeSource->setVisited(true);
    nodeSource->setDistance(0);
    nodeSource->setPredecessor(NULL);
    nodeSource->setOrder(1);

    list<Node*> listNode;
    listNode.push_back(nodeSource);

    queue.push_back(nodeSource);

    while(!queue.empty()) {
        nodeSource = queue.front();
        queue.pop_front();

        if(nodeSource->getAdjacency().size() > 1) {
            sort(nodeSource->getAdjacency().begin(), nodeSource->getAdjacency().end(), nodeCompare);
        }

        for(auto adjacency : nodeSource->getAdjacency()) {
            if(!adjacency->isVisited()) {
                adjacency->setVisited(true);
                adjacency->setDistance(nodeSource->getDistance() + 1);
                adjacency->setPredecessor(nodeSource);

                listNode.push_back(adjacency);
                queue.push_back(adjacency);
            }
        }
    }

}

bool Graph::nodeCompare(Node* nodeA, Node* nodeB) {
    return nodeA->getValue() < nodeB->getValue();
}

void Graph::deallocateMemory() {
    for(auto node : this->node) {
        delete node;
    }
}