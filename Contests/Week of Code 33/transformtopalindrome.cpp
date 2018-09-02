#include <bits/stdc++.h>

using namespace std;

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

int LPS(vector<int>str) {
    int n = str.size();
    int i, j, k;
    int L[n][n];
    for (i = 0; i < n; i++)
        L[i][i] = 1;
    for (k = 2; k <= n; k++) {
        for (i = 0; i < n - k + 1; i++) {
            j = i + k - 1;
            if (str[i] == str[j] && k == 2)
                L[i][j] = 2;
            else if (str[i] == str[j])
                L[i][j] = L[i + 1][j - 1] + 2;
            else
                L[i][j] = max(L[i + 1][j],L[i][j - 1]);
        }
    }
    return L[0][n - 1];
}

int main() {
    int n;
    int k;
    int m;
    Graph X(n);
    cin >> n >> k >> m;
    for(int a0 = 0; a0 < k; a0++){
        int x;
        int y;
        cin >> x >> y;
        X.Union(x,y);
    }
    vector<int> a(m),ab;
    for(int a_i = 0; a_i < m; a_i++){
       cin >> a[a_i];
    }
    for (int i = 0; i < m; i++) {
        ab.push_back(X.Find(a[i]));
    }
    cout << LPS(ab);
    return 0;
}
