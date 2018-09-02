#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    int n;
    cin >> n;
    string x;
    cin >> x;
    int su = 0, i, count = 0;
    for (i = 0; i < n; i++) {
        if (x[i] == 'U')
            su++;
        else
            su--;
        if (su == 0 && x[i] == 'U')
            count++;
    }
    cout << count;
    return 0;
}
