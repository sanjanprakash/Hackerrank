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
        long long int n, m;
        cin >> n;
        if (n <= 3)
            cout << "0\n";
        else {
            long long int sum = 0;
            m = floor (n / 3);
            if (n % 3 == 0)
            	m--;
            sum += (m * ((2 * 3) + (m - 1) * 3)) / 2;
            //cout << sum << endl;
            m = floor (n / 5);
            if (n % 5 == 0)
            	m--;
            sum += (m * ((2 * 5) + (m - 1) * 5)) / 2;
            //cout << sum << endl;
            m = floor (n / 15);
            if (n % 15 == 0)
            	m--;
            sum -= (m * ((2 * 15) + (m - 1) * 15)) / 2;
            cout << sum << endl;
        }
        t--;
    }
    return 0;
}
