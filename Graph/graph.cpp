#include <iostream>
#include "graph.h"

class Graph 
{
public:
    //constructor
    Graph() : _num_nodes{ 0}, _num_edges{ 0}
    {
        std::cout << "Graph Constructor: default \n";
        _num_edges = 0;
        _num_nodes = 0;

    }
    Graph(int num_edges)
    {

    }
    ~Graph()
    {
        std::cout << "Graph Destructor \n";

    }
private:
    int _num_nodes;
    int _num_edges;

};

int main()
{
    Graph obj;
    return 0;
}

