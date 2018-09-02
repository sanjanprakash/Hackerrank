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
        int n, a, b;
        int i, j;
        cin >> n;
        cin >> a;
        cin >> b;
        vector <int> v;
        j = n - 1;
        for (i = 0; i < n; i++) {
            v.push_back ((a * i) + (b * j));
            j--;
        }
        sort (v.begin (), v.end ());
        v.erase (unique (v.begin (), v.end ()), v.end ());
        for (i = 0; i < v.size (); i++)
             cout << v [i] << " ";
        cout << endl;
        t--;
    }
    return 0;
}
