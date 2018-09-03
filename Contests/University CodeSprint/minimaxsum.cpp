#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int i, temp, sum = 0;
    vector<long long int> X;
    for (i = 0; i < 5; i++) {
        cin >> temp;
        sum += temp;
        X.push_back(temp);
    }
    sort(X.begin(),X.end());
    cout << sum - X[4] << " " << sum - X[0];
    return 0;
}
