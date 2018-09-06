//
// Created by manollo-guedes on 04/09/18.
//

#include "Node.h"

Node::Node() {
    this->initializateNode(-1);
}

void Node::initializateNode(int value) {
    this->setDistance(-1);
    this->setOrder(-1);
    this->setPredecessor(NULL);
    this->setVisited(false);
    this->setValue(value);
}

void Node::setDistance(int distance) {
    this->distance = distance;
}

int Node::getDistance() {
    return this->distance;
}

void Node::setOrder(int order) {
    this->order = order;
}

int Node::getOrder() {
    return this->order;
}

void Node::setPredecessor(Node *predecessor) {
    this->predecessor = predecessor;
}

Node* Node::getPredecessor() {
    return predecessor;
}

void Node::addAdjacency(Node *node) {
    this->adjacency.push_back(node);
}

vector<Node*> Node::getAdjacency() {
    return this->adjacency;
}

void Node::setVisited(bool visited) {
    this->visited = visited;
}

bool Node::isVisited() {
    return this->visited;
}

void Node::setValue(int value) {
    this->value = value;
}

int Node::getValue() {
    return this->value;
}
