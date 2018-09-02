#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, q;
    vector <int> v;
    cin >> n >> k >> q;
    int size = n, temp;
    while (size > 0) {
        cin >> temp;
        v.push_back (temp);
        size--;
    }
    while (k > 0) {
        temp = v [n - 1];
        v.pop_back ();
        v.insert (v.begin (), temp);
        k--;
    }
    while (q > 0) {
        cin >> temp;
        cout << v [temp] << endl;
        q--;
    }
    
    return 0;
}
