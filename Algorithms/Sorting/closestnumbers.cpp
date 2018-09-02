#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, temp, i, min = INT_MAX;
    cin >> n;
    vector <int> X, Y;
    for (i = 0; i < n; i++) {
        cin >> temp;
        X.push_back(temp);
    }
    sort(X.begin(),X.end());
    for (i = 0; i < n - 1; i++) {
        if (abs(X[i] - X[i+1]) <= min)
            min = abs(X[i] - X[i+1]);
    }
    for (i = 0; i < n - 1; i++) {
        if (abs(X[i] - X[i+1]) == min) {
            Y.push_back(X[i]);
            Y.push_back(X[i+1]);
        }
    }
    for (i = 0; i < Y.size(); i++)
        cout << Y[i] << " ";
    return 0;
}
