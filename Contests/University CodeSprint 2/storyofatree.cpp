#include <iostream>
#include <vector>

using namespace std;

vector<int> DFS (int start, vector<vector <int> >& adj) {
	int top;							
	int i;								
	vector<int> s;							
	s.push_back(start);
//	cout << s.size() << endl;
	vector<int> par(adj.size(), -1);
    vector<bool> visited(adj.size(), false);
	
	//Until the stack is empty...
	while (s.empty () == false) {
	   top = s.back();					//Obtaining the top vertex number from the stack
	   s.pop_back();						//Deleting it from the stack
				
	   //If this is the first time that it was visited...
	   if (visited [top] == false) {
			visited [top] = true;		//Marking it as visited
		  //Pushing all its neighbours into the stack...
		  for (i = 0; i < adj [top].size (); i++)
		  {
			  if(!visited[adj [top][i]])
			  {
              		par[adj [top][i]] = top;
		      		s.push_back(adj [top][i]);
		      }
          }
		  }//End if
		}//End while
    return par;
}

int GCD (int a, int b) {
	if (b == 0) 
        return a;
	else
		return GCD (b, a % b);
}

int *Add (int start, vector<vector <int> >& adj, int *count) {
	int top;
	int i;							
	int n = adj.size();								
	vector<int> s;							
	s.push_back(start);
//	cout << s.size() << endl;
	vector<int> par(adj.size(), -1);
    vector<bool> visited(adj.size(), false);
	
	//Until the stack is empty...
	while (s.empty () == false) {
	   //cout << "vgh\n";
	   top = s.back();						//Obtaining the top vertex number from the stack
	   s.pop_back();						//Deleting it from the stack
				
	   //If this is the first time that it was visited...
	   if (visited [top] == false) {
			visited [top] = true;		//Marking it as visited
		  //Pushing all its neighbours into the stack...
		  for (i = 0; i < adj [top].size (); i++)
		  {
			  if(!visited[adj [top][i]])
			  {
              		count[adj [top][i]] += count[top];
		      		s.push_back(adj [top][i]);
		      }
          }
		  }//End if
		}//End while
    return count;
}


int main(){
    int q, i, gcd;
    cin >> q;
    vector<int>x;
    for(int a0 = 0; a0 < q; a0++){
        int n, count = 0;
        cin >> n;
        vector <vector <int> > graph;
        vector<int> x;
        int *votes = new int[n + 1];
        for (i = 0; i <= n; i++) {
        	graph.push_back(x);
        	votes[i] = 0;	
        }
        for(int a1 = 0; a1 < n-1; a1++){
            int u;
            int v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int> par = DFS(1,graph);
        int g;
        int k;
        cin >> g >> k;
        for(int a1 = 0; a1 < g; a1++){
            int p;
            int k;
            cin >> p >> k;
            if (par[k] == p)
                votes[k]++;
            else if (par[p] == k) {
                votes[1]++;
                votes[p]--;
            }
        }
        votes = Add(1,graph,votes);
        for (i = 1; i <= n; i++) {
        	if (g - votes[i] >= k)
        		count++;
        }
        gcd = GCD(count,n);
        count /= gcd;
        n /= gcd;
        cout << count << "/" << n << endl;
    }
    return 0;
}
