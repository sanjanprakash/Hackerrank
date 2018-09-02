#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int arr[101], i, j, n, max = INT_MIN;
    cin >> n;
    int *num = new int[n];
    for (i = 0; i < 101; i++)
        arr[i] = 0;
    for (i = 0; i < n; i++) { 
        cin >> num[i];
        arr[num[i]]++;
        if (max < arr[num[i]])
            max = arr[num[i]];
    }
    cout << n - max << endl;
    return 0;
}
