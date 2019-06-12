#include <iostream>
#include <vector>
#include <queue>

using namespace std;

//data structure for the Edge

struct Edge {
	int src, dest;
};

//main classs for the graph

class Graph {
	public:
		//adjacency list vector to store the graph
		vector <vector <int>> adjList;
		
		//Constructor to create the graph
		Graph (vector<Edge> const &Edges, int N) {
			adjList.resize(N);

			//add edges to the adjaceency list
			for (auto &edge: Edges) {
				//undirected graph
				adjList[edge.src].push_back(edge.dest);
				adjList[edge.dest].push_back(edge.src);
			}
		}


};

int main () {

	return 0;
}
