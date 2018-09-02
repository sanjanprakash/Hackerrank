#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct point {
    int x, y;
};

int main() {
    int t, i, d_x, d_y;
    cin >> t;
    point P[t], Q[t], R[t];
    for (i = 0; i < t; i++) {
        cin >> P[i].x >> P[i].y >> Q[i].x >> Q[i].y;
        d_x = Q[i].x - P[i].x;
        d_y = Q[i].y - P[i].y;
        R[i].x = Q[i].x + d_x;
        R[i].y = Q[i].y + d_y;
    }
    for (i = 0; i < t; i++)
        cout << R[i].x << " " << R[i].y << endl;
    return 0;
}
