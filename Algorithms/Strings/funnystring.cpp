#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, i, j, k;
    string x;
    cin >> t;
   // cout << "sfcjns\n";
    while (t > 0) {
        cin >> x;
        //cout << "sf\n";
        j = 0;
        k = x.length () - 1;
        while (j < x.length () - 1 && k > 0) {
            if (abs (x [j] - x [j + 1]) != abs (x [k] - x [k - 1]))
                break;
            j++;
            k--;
        }
        if (j == x.length () - 1)
            cout << "Funny\n";
        else
            cout << "Not Funny\n";
        t--;
    }
    return 0;
}
