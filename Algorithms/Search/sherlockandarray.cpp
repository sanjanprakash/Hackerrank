#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n, i, j, k, sum, sum_1, sum_2, temp;
    cin >> t;
    int *arr;
    
    while (t > 0) {
        cin >> n;
        sum = 0;
        arr = new int [n + 2];
        arr[0] = 0;
        cin >> arr[1];
        for (i = 2; i <= n; i++) {
            cin >> arr [i];
            arr[i] += arr[i - 1];
        }
        arr[n + 1] = arr[n];
        i = 1;
        while(i < n + 1)
        {
            if(arr[i - 1] == arr[n] - arr[i])
            {
                cout << "YES\n";
                break;                
            }
            i++;
        }
        if(i == n + 1)
        {
            if(arr[n] == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        t--;
    }
    
    return 0;
}
