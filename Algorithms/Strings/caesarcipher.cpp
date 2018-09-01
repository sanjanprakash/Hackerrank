#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i;
    int n, k;
    int fact;
    string s;
    
    cin >> n;
    cin >> s;
    cin >> k;
    
    fact = k % 26;
    for (i = 0; i < n; i++) {
        if (s [i] >= 65 && s [i] <= 90) {
            if (s [i] + fact > 90) {
                s [i] = s [i] + fact - 26;
            }
            else
                s [i] = s [i] + fact;
        }
        if (s [i] >= 97 && s [i] <= 122) {
            if (s [i] + fact > 122) {
            	//cout << s[i]<< endl;
                s [i] = s [i] + fact - 26;
            }
            else
                s [i] = s [i] + fact;
        }
    }
    cout << s;
    return 0;
}
