#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, j;
    cin >> n;
    for (i = n; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            cout << " ";
        } 
        for (j = 0; j < n + 1 - i; j++) {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
