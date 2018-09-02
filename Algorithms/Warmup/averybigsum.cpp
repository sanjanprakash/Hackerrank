#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i;
    cin >> n;
    long arr[n], sum = 0;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
        sum += arr[i];
    cout << sum;
    return 0;
}
