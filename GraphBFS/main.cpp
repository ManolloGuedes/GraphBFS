# include <iostream>
# include <algorithm>
#include <fstream>
#include "utils/Graph.h"

using namespace std;


int main() {
    ifstream stream;
    stream.open("/home/manollo-guedes/Documentos/Mestrado/PAA/1138_bus.mtx", std::ifstream::in);

    while (stream.peek() == '%'){
        stream.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    int dimensionA, dimensionB, value;
    stream >> dimensionA >> dimensionB >> value;

    Graph g(dimensionA);

    int nodeA, nodeB;
    float weight;

    while (!stream.eof()) {
        stream >> nodeA >> nodeB >> weight;

        g.add_edge(nodeA, nodeB);
    }

    stream.close();

    g.deallocateMemory();

    g.BFS(2);
}

