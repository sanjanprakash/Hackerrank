#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n, i, j;
    string temp;
    bool flag;
    cin >> t;
    while (t > 0) {
        cin >> n;
        vector<vector<char> > X;
        flag = true;
        for (i = 0; i < n; i++) {
            vector<char> t;
            X.push_back(t);
            cin >> temp;
            for (j = 0; j < n; j++) {
                X[i].push_back(temp[j]);    
            }
            sort(X[i].begin(),X[i].end());
        }
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n; j++) {
                if (X[i][j] > X[i + 1][j]) {
                    flag = false;
                    break;
                }                
            }
        }
        if (flag == false)
            cout << "NO\n";
        else
            cout << "YES\n";
        X.clear();
        t--;
    }
    return 0;
}
