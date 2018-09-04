//
// Created by manollo-guedes on 04/09/18.
//

#ifndef GRAPHBFS_FILEPROCESS_H
#define GRAPHBFS_FILEPROCESS_H

#include <fstream>
#include "Graph.h"

using namespace std;

class GraphFileProcess {
    ifstream stream;
public:
    GraphFileProcess(string fileName);
    void skipLinesWithInit(char init);
    void initializeGraph(Graph graph);

};


#endif //GRAPHBFS_FILEPROCESS_H
