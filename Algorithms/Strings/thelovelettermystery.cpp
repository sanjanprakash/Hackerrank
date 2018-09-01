#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, i, j, count;
    cin >> t;
    string x;
    while (t > 0) {
        cin >> x;
        count = 0;
        j = x.length () / 2;
        i = j - 1;
        if (x.length () % 2 == 1)
            j++;  
        
        while (j < x.length ()) {
            if (x [i] > x [j]) {
                count += x [i] - x [j];
            }
            else {
                count += x [j] - x [i];
            }
            //cout << count << " ";
            j++;
            i--;
        }
        cout << count << endl;
        t--;
    }
    return 0;
}
