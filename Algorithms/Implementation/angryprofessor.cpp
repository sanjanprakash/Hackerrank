#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int t, n, k, i, j, count = 0;
    cin >> t;
    string s[t];
    for (i = 0; i < t; i++) {
        cin >> n >> k;
        int temp;
        for (j = 0; j < n; j++) {
            cin >> temp;
            if (temp <= 0)
                count++;   
        }
        if (count < k)
            s[i] = "YES";
        else
            s[i] = "NO";
        count = 0;
    }
    for (i = 0; i < t; i++)
        cout << s[i] << endl;
    return 0;
}
