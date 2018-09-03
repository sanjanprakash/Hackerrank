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
        int n;
        cin >> n;
        long long int sqsu, susq, a, b, c;
        sqsu = ((n * (n + 1)) / 2 );
        sqsu *= sqsu;
        susq = n * (n + 1);
        susq *= (2 * n) + 1;
        susq /= 6;
        cout << abs (sqsu - susq) << endl;
        t--;
    }
    return 0;
}
