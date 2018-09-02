#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, temp, i;
    cin >> n >> k;
    vector<int> X;
    for (i = 0; i < n; i++) {
        cin >> temp;
        X.push_back(temp);
    }
    for (i = 0; i < k; i++) {
        temp = X[0];
        X.erase(X.begin());
        X.push_back(temp);
    }
    for (i = 0; i < n; i++)
        cout << X[i] << " ";
    return 0;
}
