//
// Created by manollo-guedes on 04/09/18.
//

#ifndef GRAPHBFS_NODE_H
#define GRAPHBFS_NODE_H
#include <vector>

using namespace std;


class Node {
    int distance;
    Node* predecessor;
    int order;
    vector<Node*> adjacency;
    unsigned char visited;
    int value;

public:

    Node();

    void initializateNode(int value);

    void setDistance(int distance);

    int getDistance();

    void setPredecessor(Node* predecessor);

    Node* getPredecessor();

    void setOrder(int order);

    int getOrder();

    void addAdjacency(Node *node);

    vector<Node*> getAdjacency();

    void setVisited(bool visited);

    bool isVisited();

    void setValue(int value);

    int getValue();

};


#endif //GRAPHBFS_NODE_H
