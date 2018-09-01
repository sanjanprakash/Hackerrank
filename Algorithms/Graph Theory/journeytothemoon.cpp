#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Graph {

	private :
		
		long long int *leader;				//Pointer array to store the leader of each vertex
		long long int *sizes;					//Pointer array to store the sizes of each of the disjoint sets
		long long int vertices;				//Variable to store the number of vertices in the graph
		
	public :
	
		//Constructor
		Graph (long long int v) {
			long long int i;									//Iterator
			vertices = v;
			//Memory allocations
			leader = new long long int [vertices];
			sizes = new long long int [vertices];
			//Initialisations : Creating 'v' number of disjoint singleton sets
			for (i = 0; i < vertices; i++) {
				leader [i] = i;
				sizes [i] = 1;
			}//End for
		}
    
        /*long long int Find (long long int i) {
            if(leader[i] == i)
                return i;
            leader[i] = this->Find(leader[i]);
            return leader[i];
        }*/
		
		//Find () returns the leader of the set to which the vertex 'i' belongs
		long long int Find (long long int i) {
			long long int root;										//Leader of the set
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
		void Union (long long int x, long long int y) {
			long long p, q;										//Leaders of the sets to which 'x' and 'y' belong
			p = Find (x);
			q = Find (y);
			
			//If the set containing 'x' is smaller...
			if (sizes [p] < sizes [q]) {
				leader [p] = q;
				//sizes [q] += sizes [p];
			}//End if
			else {
				leader [q] = p;
				//sizes [p] += sizes [q];
			}//End else
			return;
		}
		
		void Check () {
			long long int i;
			for (i = 0; i < vertices; i++) {
				if (leader [i] != i)
					sizes [i] = 0;
			}
		}
		
		long long int ans () {
			long long int res = 0;
			long long int i, j;
            map<long long int, long long int> t;
            for(int i = 0; i < vertices; i++)
                t[Find(i)]++;
            for(auto& x: t)
                res += x.second * (vertices - x.second);
			/*for (i = 0; i < vertices - 1; i++) {
				for (j = i + 1; j < vertices; j++) 
					res += (sizes [i] * sizes [j]);
			}*/
			return res / 2;
		}
};

int main () {
	long long int n, i, j, a, b, result;
	cin >> n >> i;
	Graph X (n);
	for (j = 0; j < i; j++) {
		cin >> a >> b;
		X.Union (a, b);
	}
	X.Check ();
	result = X.ans ();
	cout << result << endl;
	return 0;
}
