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
        int n;
        cin >> n;
        if (n % 2 == 1)
            cout << "No\n";
        else
            cout << "Yes\n";
        t--;
    }
    return 0;
}
