#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,q,m,x,y,lastAns = 0;
    cin >> n >> q;
    vector<vector <int> > X;
    vector<int> temp;
    for (i = 0; i < n; i++) 
        X.push_back(temp);
    for (i = 0; i < q; i++) {
        cin >> m >> x >> y;
        if (m == 1) {
            X[(x ^ lastAns) % n].push_back(y);
        }
        else {
            lastAns = X[(x ^ lastAns) % n][y % X[(x ^ lastAns) % n].size()];
            cout << lastAns << endl;
        }
    }
    return 0;
}
