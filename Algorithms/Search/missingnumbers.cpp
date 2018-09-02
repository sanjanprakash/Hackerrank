#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, i, j, temp;
    cin >> n;
    int A [1000010], B [1000010];
    for (i = 0; i < 1000010; i++) {
        A [i] = 0;
        B [i] = 0;
    }
    while (n > 0) {
        cin >> temp;
        A [temp]++;
        n--;
    }
    cin >> m;
    while (m > 0) {
        cin >> temp;
        B [temp]++;
        m--;
    }
    for (i = 0; i < 1000010; i++) {
        if (A [i] != B [i])
            cout << i << " ";
    }
    return 0;
}
