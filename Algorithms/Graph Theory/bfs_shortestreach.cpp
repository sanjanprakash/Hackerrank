#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

#define INF 99999

using namespace std;

void Shortest (int start, int n, int **arr) {
    int dist [n][n], i, j, k;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            dist [i][j] = arr [i][j];
    }
    
    
    
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    for (i = 0; i < n; i++) {
        if (i != start - 1) {
            if (dist [start - 1][i] == INF)
                cout << "-1 ";
            else 
                cout << dist [start - 1][i] << " ";
        }
    }
}

int main () {
    int t, i, j, from, to, start;
    cin >> t;
    while (t > 0) {
        int n, m;
        cin >> n >> m;
        //int arr [n][n];
        int **arr;
        arr = new int* [n];
        for (i = 0; i < n; i++)
        	arr [i] = new int [n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                arr [i][j] = INF;
        }
        while (m > 0) {
            cin >> from >> to;
            arr [from - 1][to - 1] = 6;
            arr [to - 1][from - 1] = 6;
            m--;
        }
        cin >> start;
        Shortest (start, n, arr);
        cout << endl;
        t--;
    }
    return 0;
}
