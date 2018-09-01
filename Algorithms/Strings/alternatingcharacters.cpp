#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t > 0) {
        string x; 
        cin >> x;
        int i, count = 0;
        for (i = 0; i < x.length () - 1; i++) {
            if (x [i] == x [i + 1])
                count++;
        }
        cout << count << endl;
        t--;
    }
    return 0;
}
