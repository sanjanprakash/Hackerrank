#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, j, sum1 = 0, sum2 = 0;
    cin >> n;
    int mat[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cin >> mat[i][j];
    }
    for (i = 0; i < n; i++)
        sum1 += mat[i][i];
    for (i = n - 1; i >= 0; i--) {
        sum2 += mat[n - 1 - i][i];
    }
    if (sum1 < sum2)
        cout << sum2 - sum1;
    else
        cout << sum1 - sum2;
    return 0;
}
