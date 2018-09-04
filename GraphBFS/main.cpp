#include <iostream>
#include "utils/Graph.h"
#include "utils/GraphFileProcess.h"

using namespace std;

int main() {
/*  Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFSCalculate(2);
*/
    GraphFileProcess gfprocess("1138_bus.mtx");
    gfprocess.skipLinesWithInit('%');

    Graph graph;

    gfprocess.initializeGraph(graph);

    graph.BFSCalculate(1056);

    return 0;
}