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
        int n, i, max_end = 0, max_curr = 0, sum = 0, j = 0, max;
        cin >> n;
        int arr [n];
        for (i = 0; i < n; i++) {
            cin >> arr [i];
            if (arr [i] > 0)
                sum += arr [i];
            else {
                j++;
                if (i == 0)
                    max = arr [i];
                else if (arr [i] > max)
                    max = arr [i];
            }
            if (max_end + arr [i] > 0)
                max_end += arr [i];
            else
                max_end = 0;
            if (max_end > max_curr)
                max_curr = max_end; 
            //cout << "Max_end = " << max_end << " Max_curr = " << max_curr << endl;
        }
        if (j == n)
            cout << max << " " << max << endl;
        else
            cout << max_curr << " " << sum << endl;
        t--;
    }
    return 0;
}
