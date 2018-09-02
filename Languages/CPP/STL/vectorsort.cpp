#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, num;
    cin >> n;
    vector <int> x;
    for (i = 0; i < n; i++) {
        cin >> num;
        x.push_back (num);
    }
    sort (x.begin (), x.end ());
    for (i = 0; i < n; i++)
        cout << x [i] << " ";
    return 0;
}
