#include <iostream>
#include <vector>

using namespace std;

//Struct that represents an edge
struct Edge {
	int start;						//Starting vertex of the edge
	int end;						//Ending vertex of the edge
	int weight;						//Weight of the edge
};

class Graph {

	private :
		
		int *leader;				//Pointer array to store the leader of each vertex
		int *sizes;					//Pointer array to store the sizes of each of the disjoint sets
		int vertices;				//Variable to store the number of vertices in the graph
		
	public :
	
		//Constructor
		Graph (int v) {
			int i;									//Iterator
			vertices = v;
			//Memory allocations
			leader = new int [vertices + 1];
			sizes = new int [vertices + 1];
			//Initialisations : Creating 'v' number of disjoint singleton sets
			for (i = 1; i < vertices + 1; i++) {
				leader [i] = i;
				sizes [i] = 1;
			}//End for
		}
		
		void merge (vector<Edge>&original, vector<Edge>&first, vector<Edge>&second) {
			original.clear ();                                              //Deleting all the elements in the larger 'original' vector
			int i = 0, j = 0;                                               //Iterators
		
			//Until the end of either of the smaller vectors is reached...
			while ((i < first.size ()) && (j < second.size ())) {
				if (first [i].weight <= second [j].weight) {
				    original.push_back (first [i]);
				    i++;    
				}//End if
				else {
				    original.push_back (second [j]);
				    j++;
				}//End else
			}//End while
			//After reaching the end of the 'first' vector, until the end of the 'second' vector is reached...
			while (j < second.size ()) {
				original.push_back (second [j]);
				j++;
			}//End while
			//After reaching the end of the 'second' vector, until the end of the 'first' vector is reached...    
			while (i < first.size ()) {
				original.push_back (first [i]);
				i++;
			}//End while
		}
		
		void merge_sort (vector<Edge>&bigger) {
		//If the 'bigger' vector has more than one element...
			if (bigger.size () > 1) {
				vector<Edge> first_half (bigger.begin (), bigger.begin () + (bigger.size () / 2));
				vector<Edge> second_half (bigger.begin () + (bigger.size () / 2), bigger.end ());
				merge_sort (first_half);                        //Recursive call on 'first_half' vector
				merge_sort (second_half);                       //Recursive call on 'second_half' vector
				merge (bigger, first_half, second_half);        //Merging 'first_half' and 'second_half' into the original 'bigger' vector
			}//End if
		}
		
		//Find () returns the leader of the set to which the vertex 'i' belongs
		int Find (int i) {
			int root;										//Leader of the set
			int j;											//Index or iterator
			root = i;
			
			//Finding the root of the set to which the vertex 'i' belongs...
			while (root != leader [root])
				root = leader [root];
			
			//Making sure that all vertices point directly to the leader of the set...
			while (i != root) {
				j = leader [i];
				leader [i] = root;
				i = j;
			}//End while
			return root;
		}
		
		//Union () merges the two sets that contain 'x' and 'y'
		void Union (int x, int y) {
			int p, q;										//Leaders of the sets to which 'x' and 'y' belong
			p = Find (x);
			q = Find (y);
			
			//If the set containing 'x' is smaller...
			if (sizes [p] < sizes [q]) {
				leader [p] = q;
				sizes [q] = sizes [q] + sizes [p];
			}//End if
			else {
				leader [q] = p;
				sizes [p] = sizes [q] + sizes [p];
			}//End else
			return;
		}
};

int main (){
	int V, E;										//Number of vertices and edges in the graph
	int i;											//Iterator
	int sum = 0;
    int start, end;									//Starting and ending vertices of an edge
	Edge X;											//Struct to store an edge temporarily
	vector<Edge> roads;								//Vector to store the graph
	vector<Edge> result;							//Vector to store the Minimum Spanning Tree (MST)
	
	//Prompt
	//cout << "Enter the number of vertices : ";
	cin >> V;
	//cout << "Enter the number of edges : ";
	cin >> E;
	
	Graph MST (V);
	
	//Storing the graph edge-by-edge alongwith their respective weights...
	//cout << "Enter the starting point, ending point and the weight of the edge separated by spaces.\n";
	for (i = 0; i < E; i++) {
		cin >> X.start >> X.end >> X.weight;
		roads.push_back (X);	
	}//End for
    
    MST.merge_sort (roads);
    
    for (i = 0; i < roads.size (); i++) {
    	start = roads [i].start;
    	end = roads [i].end;
    	//If the starting and ending vertices are not in the same set, it implies that by adding this edge to the MST, no cycles are formed
    	if (MST.Find (start) != MST.Find (end)) {
    		MST.Union (start, end);					//Putting them into a common set
    		result.push_back (roads [i]);			//Adding this edge to the resulting MST
            sum = sum + roads [i].weight;
    	}//End if
    }//End for
    cout << sum;
    //Displaying the edges of the MST alongwith their weights...
    //cout << "The minimum spanning tree formed from the given graph is as follows :\nStart\tEnd\tWeight\n";
    //for (i = 0; i < V - 1; i++)
    	//cout << "  " << result [i].start << "\t " << result [i].end << "\t  " << result [i].weight << endl;
    return 0;
}
