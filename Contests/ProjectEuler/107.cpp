#include <iostream>
#include <vector>

using namespace std;

//Struct that represents an edge
struct Edge {
	int start;						//Starting vertex of the edge
	int end;						//Ending vertex of the edge
	int weight;						//Weight of the edge
};

class Heap {
	
	public :
	
		vector<Edge> heap;
		
		void Insert (Edge neo) {
			int par, cur;								//Variables to maintain the indices of the parent and current cell
			int size;									//Number of elements in the vector 'heap'
			Edge temp;									//Temporary holding variable
			int i;										//Iterator
			
			heap.push_back (neo);
			size = heap.size ();
			if (size > 1) {
				cur = size - 1;							//Index of the current cell
				par = (size - 2) / 2;					//Index of the parent cell of the current cell
				//Until the weight of the current cell is less than that of its parent cell, the current cell moves up towards the top of the 'heap' vector...
				while ((heap [par].weight > heap [cur].weight) && (cur != 0)) {
					//Swapping
					temp = heap [par];
					heap [par] = heap [cur];
					heap [cur] = temp;
					cur = par;
					par = (par - 1) / 2;
				}//End while
			}//End if
			return;
		}
		
		Edge Pluck_Min () {
			int size = heap.size ();
			Edge temp;										//Temporary holding variable
			Edge min;
			if (size == 1) {
				min = heap [0];
				heap.pop_back ();
			}
			//If there are more than one elements in the 'heap' vector...
			else if (size > 1){
				min = heap [0];
				//Swapping the maximum element with the last element
				temp = heap [0];
				heap [0] = heap [size - 1];
				heap [size - 1] = temp;
				heap.pop_back ();							//Deleting the last element (max element) from the 'heap' vector
				size = heap.size ();
				sift_down (heap, 0, size - 1);				//Maintaining the heap ordering property of the remaining elements
			}//End else
			
			return min;
		}
		
		//sift_down () function maintains the heap ordering property of the elements with indices from i to n
		void sift_down (vector<Edge> &v, int i, int n) {
			Edge temp = v [i];				//Temporary holding variable
			int left, right, mover;			//Variables to store the indices of the left and right children and the cell to be swapped with
			
			//Until the left child is within the 'heap' vector...
			while ((2 * i) + 1 <= n) {
				left = (2 * i) + 1;
				right = left + 1;
				mover = left;				//Initialising 'mover' with the index of the left child
				//If there are valid left and right children and the left child is less than the right child...
				if ((left < n) && (v [right].weight < v [left].weight))
					mover = right;			//Changing 'mover' to the index of the right child
				//If one of the children is less than its parent...
				if (v [mover].weight < temp.weight)
					v [i] = v [mover];		//Swap
				//If both children are greater than or equal to the parent...
				else
					break;
				i = mover;					//Changing the iterator to the index of the moved cell
			}//End while
			v [i] = temp;					//Restoring the value of the original parent
			return;
		}
};

class Graph {
	
	private :
		
		int vertices;												//Number of vertices in the graph
		vector<Edge> *adj;											//Vector to store the graph	
		bool *visited;												//Array to keep track of all the vertices that have been visited
		
	public :
		
		//Constructor
		Graph (int n) {
			int i;													//Iterator
			vertices = n;
			//Memory allocations
			adj = new vector<Edge> [n + 1]; 
			visited = new bool [n + 1];
			//Initialisation
			for (i = 0; i <= n; i++)
				visited [i] = false;
		}
		
		void Add_Edge (int start, int end, int weight) {
			Edge a, b;												//Edges to be added with the given parameters
			//Storing the parameters...
			a.start = start;
			b.start = end;
			a.end = end;
			b.end = start;
			a.weight = weight;
			b.weight = weight;
			//Adding the edges...
			adj [start].push_back (a);
			adj [end].push_back (b);
		}
		
		//MST () returns a vector with all the edges that are present in the Minimum Spanning Tree
		int MST (int begin) {
			int current, neo;									//Starting and ending vertices of the current edge
			int i = 0, j;										//Iterators
			Edge temp;
			Edge a;
			vector<Edge> mst;									//Vector to store the edges in the Minimum Spanning Tree
			Heap X;												//Object of class Heap to sort the edges based on their weights
			int sum = 0;
			current = begin;
			
			//Until the number of edges included in the Minimum Spanning Tree is less than the number of vertices...
			//This is because an MST will always have (V - 1) edges
			while (i < vertices) {
				//If the current vertex is unvisited...
				if (visited [current] == false) {
					visited [current] = true;							//Marking it as visited
					//Going through all the edges that include the current vertex...
					for (j = 0; j < adj [current].size (); j++) {
						//Storing all parameters of an edge in a temporary edge...
						temp.start = current;
						temp.end = adj [current][j].end;
						temp.weight = adj [current][j].weight;
						
						//If the ending point of this edge is unvisited...
						if (visited [temp.end] == false)
							X.Insert (temp);							//Inserting the edge into the heap
					}//End for
					
					temp = X.Pluck_Min ();								//Extracting the edge with the least weight from the heap
					current = temp.start;
					neo = temp.end;
					
					//If the ending point of the minimum edge is unvisited...
					if (visited [neo] == false) {
						//Storing the parameters of the edge in another edge...
						a.start = current;
						a.end = neo;
						a.weight = temp.weight;
						//Including the edge in the Minimum Spanning Tree
						mst.push_back (a);
                        sum += temp.weight;
					}//End if
					
					current = neo;										//The ending point becomes the current point for the next iteration
					i++;
				}//End if
				
				//If the current vertex is visited...
				else {
					temp = X.Pluck_Min ();								//Extracting the edge with the least weight from the heap
					current = temp.start;
					neo = temp.end;
					//If the ending point of the minimum edge is unvisited...
					if (visited [neo] == false) {
						//Storing the parameters of the edge in another edge...
						a.start = current;
						a.end = neo;
						a.weight = temp.weight;
						//Including the edge in the Minimum Spanning Tree
						mst.push_back (a);
                        sum += temp.weight;
					}//End if
					
					current = neo;										//The ending point becomes the current point for the next iteration
				}//End else
			}//End while		
			return sum;
		}
};

int main () {
	int V, E;										//Number of vertices and edges in the graph
	int i;											//Iterator
	int start, end, weight;							//Starting and ending vertices of an edge with its weight
	int origin;										//Point from where the Minimum Spanning Tree (MST) will begin
	vector<Edge> mst;								//Vector to store the resulting MST
	
	//Prompt	
	//cout << "Enter the number of vertices : ";
	cin >> V >> E;
	//cout << "Enter the number of edges : ";
	// >> E;
	
	Graph G (V);
	
	//Storing the edges of the graph one-by-one alongwith their weights...
	//cout << "Enter the starting point, ending point and the weight of the edge separated by spaces.\n";
	for (i = 0; i < E; i++) {
		cin >> start >> end >> weight;
		G.Add_Edge (start, end, weight);	
	}//End for
	
	//cout << "Enter the starting vertex of the Minimum Spanning Tree : ";
	//cin >> origin;
	cout << G.MST (1);
	
	//Displaying the edges of the MST alongwith their weights...
	//cout << "The minimum spanning tree formed from the given graph is as follows :\nStart\tEnd\tWeight\n";
	 	
	
	return 0;
}
