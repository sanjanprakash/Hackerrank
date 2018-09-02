#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    long long int b, w, x, y, z;
    long long int cost;
    cin >> t;
    while (t--) {
        cin >> b >> w >> x >> y >> z;
        if((x + z) < y)
            y = x + z;
        else if((y + z) < x)
            x = y + z;
        cost = b*x + w*y;
        cout << cost << endl;
    }
    return 0;
}
