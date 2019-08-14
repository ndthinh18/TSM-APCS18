#include "TSM.h"
// driver program to test above function 
int main() 
{ 
	// matrix representation of graph 
	int graph[][V] = { { 0, 10, 15, 20 }, 
					{ 10, 0, 35, 25 }, 
					{ 15, 35, 0, 30 }, 
					{ 20, 25, 30, 0 } };
	int s = 0; 
	vector<int> path;
	cout << travllingSalesmanProblem(graph, s, path) << endl;
	cout << s + 1 <<  " -> ";
	for (int i = 0; i < path.size(); i++)
		cout << path[i] + 1 << " -> ";
	cout << s + 1 << endl;
	system("pause");
	return 0; 
}
