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
        int arr1 [26], arr2 [26], i, sum = 0;
        string x;
        cin >> x;
        if (x.length () % 2 != 0)
            cout << "-1\n";
        else {
            for (i = 0; i < 26; i++) {
                arr1 [i] = 0;
                arr2 [i] = 0;
            }
            for (i = 0; i < x.length () / 2; i++)
                arr1 [int (x [i]) - 97]++;
            for (i = x.length () / 2; i < x.length (); i++)
                arr2 [int (x [i]) - 97]++;
            for (i = 0; i < 26; i++)
                sum += abs (arr1 [i] - arr2 [i]);
            cout << sum / 2 << endl;
        }
        t--;
    }
    return 0;
}
