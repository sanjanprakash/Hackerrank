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
        long long int sum = 2;
        long long int n, curr = 0, temp;
        cin >> n;
        long long int prev1 = 1, prev2 = 2;
        if (n < 2)
            cout << "0\n";
        else {
            while (curr < n) {
                curr = prev1 + prev2;
                prev1 = prev2;
                prev2 = curr;
                if (curr % 2 == 0 && curr < n) {
                    sum += curr;
                }
            }
        }
        cout << sum << endl;
        t--;
    }
    return 0;
}
