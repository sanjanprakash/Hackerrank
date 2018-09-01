#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n,i;
        int sum = 0;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
            if(i % 2 == 0)
                sum ^= arr[i];
        }
        if(n % 2 == 1)
            cout << sum << endl;
        else
            cout << "0\n";
        t--;
    }
    return 0;
}
