#include <bits/stdc++.h>

using namespace std;

int max(int a,int b) {
    return (a < b) ? b:a;
} 

int main() {
    int h,w;
    cin >> h >> w;
    int i,j,t;
    vector<vector<int> > grid;
    vector<int> start;
    for (i = 0; i <= w + 1; i++) {
        start.push_back(0);
    }
    grid.push_back(start);
    for (i = 0; i < h; i++) {
        vector<int> temp;
        temp.push_back(0);
        for (j = 0; j < w; j++) {
            cin >> t;
            temp.push_back(t);
        }
        temp.push_back(0);
        grid.push_back(temp);
    }
    grid.push_back(start);
        
    int ans = 2 * h * w;
    for (i = 1; i <= h; i++) {
        for (j = 1; j <= w; j++) {
            ans += max(0,grid[i][j] - grid[i - 1][j]);
            ans += max(0,grid[i][j] - grid[i + 1][j]);
            ans += max(0,grid[i][j] - grid[i][j - 1]);
            ans += max(0,grid[i][j] - grid[i][j + 1]);
        }
    }
    cout << ans << endl;
}
