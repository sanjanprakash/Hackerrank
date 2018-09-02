#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max (int a, int b) {
    return (a > b) ? a : b;
}

int Knapsack(int *arr, int n, int k) {
    int *mem = new int[k + 1];
    int i, j;
    for (i = 0; i <= k; i++)
        mem[i] = 0;
    for (i = 1; i <= k; i++) {
        for (j = 0; j < n; j++) {
            if (arr[j] <= i) {
                mem[i] = max(mem[i],arr[j] + mem[i - arr[j]]);
            }
        }
    }
    return mem[k];
}

int main() {
    int t, n, k, i, ans;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int *arr = new int[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        ans = Knapsack(arr,n,k); 
        cout << ans << endl;
    }
    return 0;
}
