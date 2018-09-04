//
// Created by manollo-guedes on 04/09/18.
//

#include <limits>
#include "GraphFileProcess.h"

GraphFileProcess::GraphFileProcess(string fileName) {
    this->stream.open(fileName, std::ifstream::in);
}

void GraphFileProcess::skipLinesWithInit(char init) {
    while (this->stream.peek() == init){
        this->stream.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void GraphFileProcess::initializeGraph(Graph graph) {
    int nodeA, nodeB, weight;
    if(this->stream.is_open()) {
        int dimensionA, dimensionB, value;
        this->stream >> dimensionA >> dimensionB >> value;

        graph.setNumberOfVertices(dimensionA);
        graph.instantiatePAdjacencyList(dimensionA);

        while (this->stream.is_open()) {
            this->stream >> nodeA >> nodeB >> weight;

            graph.addEdge(nodeA, nodeB);
        }
    }
}