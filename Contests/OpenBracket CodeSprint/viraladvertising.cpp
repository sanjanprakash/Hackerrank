#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, sum = 0;
    cin >> n;
    int *arr = new int[n];
    arr[0] = 2;
    sum = 2;
    for (i = 1; i < n; i++) {
        arr[i] = (3 * arr[i - 1])/2;
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
