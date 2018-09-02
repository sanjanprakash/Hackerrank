#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, sum = 0, k = 5;
    cin >> n;
    for (i = 1; i <= n; i++) {
        sum += k/2;
        k = 3 * (k/2);
    }
    cout << sum << endl;
    return 0;
}
