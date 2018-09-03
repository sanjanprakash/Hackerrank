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
        int a,b,d,count;
        cin >> a >> b >> d;
        if (d == 0)
           count = 0;
        else if (d == a)
            count = 1;
        else if (d % b == 0) {
            if (d == b)
                count = 1;
            else
                count = d/b;
        }
        else if (d < a)
            count = 2;
        else if (d < b) {
            count = 2;
        }
        else {
            count = (d/b) - 1;
            if (d - b*(count + 1) == a)
                count += 2;
            else 
                count += 2;
        }
        cout << count << endl;
        t--;
    }
    return 0;
}
