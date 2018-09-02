#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int r, c;
    cin >> r >> c;
    if (r / 2 <= 1) {
        if (r == 1)
            cout << (2 * c) - 2 << endl;
        else
            cout << (2 * c) - 1 << endl;
    } 
    else {
        if (r % 2 == 0) 
            cout << (10 * (r / 2 - 1)) + (2 * c) - 1 << endl;
        else
            cout << (10 * (r / 2)) + (2 * c) - 2 << endl;
    }
    return 0;
}
