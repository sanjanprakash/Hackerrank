#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int p, q;
    cin >> p;
    cin >> q;
    int i = p, count = 0;
    while (i <= q) {
        unsigned long long int j = pow (i, 2);
        unsigned long long int k = 1;
        int num_sq = 0;
        while (j / k != 0) {
            k *= 10;
            num_sq++;
        }
        if (num_sq % 2 == 0)
            num_sq /= 2;
        else
            num_sq = (num_sq / 2) + 1;
        int left = j / pow (10, num_sq), right = j % int (pow (10, num_sq));
        if (left + right == i) {
            cout << i << " ";
            count++;
        }
        i++;
    }
    if (count == 0)
        cout << "INVALID RANGE";
    return 0;
}
