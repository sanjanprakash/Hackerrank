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
        int n, i;
        cin >> n;
        long long int ans = 1;
        long long int arr [n - 1];
        for (i = 0; i < n - 1; i++) {
            cin >> arr [i];
            ans *= arr [i];
            ans = ans % 1234567;
        }
        ans = ans % 1234567;
        cout << ans << endl;
        t--;
    }
    return 0;
}
