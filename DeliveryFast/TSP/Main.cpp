#include "TSP.h"
// driver program to test above function 
int main() 
{ 
	// matrix representation of graph 
	int graph[][V] = { { 0, 10, 15, 20 }, 
					{ 10, 0, 35, 25 }, 
					{ 15, 35, 0, 30 }, 
					{ 20, 25, 30, 0 } }; 
	int s = 0; 
	cout << travllingSalesmanProblem(graph, s) << endl; 
	return 0; 
}
