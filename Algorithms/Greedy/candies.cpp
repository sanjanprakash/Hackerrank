#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define max(a,b) (((a) > (b)) ? (a):(b))

int main() {
    int n, i, sum = 0;
    cin >> n;
    int arr [n], ans[n];
    for (i = 0; i < n; i++) {
        cin >> arr [i];
    }
    ans[0] = 1;
    for(i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1])
            ans[i] = ans[i - 1] + 1;
        else
            ans[i] = 1;
    }
    for(i = n - 2; i >= 0; i--) {
        if(arr[i] > arr[i + 1])
            ans[i] = max(ans[i], ans[i + 1] + 1);
    }
    for (i = 0; i < n; i++)
        sum += ans[i];
    cout << sum <<endl;
    return 0;
}
