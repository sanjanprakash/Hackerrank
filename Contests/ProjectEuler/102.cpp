#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct pt {
    long long int x, y;
};


long long int area (pt a, pt b, pt c) {
   long long int ar = (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)); 
    if (ar < 0)
        ar *= -1;
    return ar;
}

bool check (pt a, pt b, pt c) {
    pt origin;
    origin.x = 0;
    origin.y = 0;
    if (area (a, b, c) == area (a, b, origin) + area (a, c, origin) + area (b, c, origin))
        return true;
    else
        return false;
}

int main() {
    int t, co = 0;
    cin >> t;
    while (t > 0) {
        pt a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        if (check (a, b, c) == true)
            co++;
        t--;
    }
    cout << co;
    return 0;
}
