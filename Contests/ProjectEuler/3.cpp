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
        long long int n, i = 2, max;
        cin >> n;
        while (n > 1) {
            if (n % i == 0) {
                while (n % i == 0) {
                    max = i;
                    n /= i;
                }
            }
            else {
                if (i >= floor (sqrt (n))) {
                    max = n;
                    break;
                }
                    
            }
            i++;
        }
        cout << max << endl;
        t--;
    }
    return 0;
}
