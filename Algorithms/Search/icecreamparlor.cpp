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
        int m, n, i, j, flag = 0, temp;
        int max, min, guess;
        vector <int> v;
        cin >> m;
        cin >> n;
        i = n;
        while (i > 0) {
            cin >> temp;
            v.push_back (temp);
            i--;
        }
        vector <int> copy (v.begin (), v.end ());
        sort (copy.begin (), copy.end ());
        
        for (i = 0; i < n; i++) {
            min = i;
            max = n - 1;
            while (min <= max) {
                guess = (min + max) / 2;
                if (copy [guess] == m - copy [i]) {
                    flag = 1;
                    break;
                }
                else if (copy [guess] < m - copy [i])
                    min = guess + 1;
                else
                    max = guess - 1;
            }
            if (flag == 1) {
                int flare = 0, x = -1, y = -1;
                for (j = 0; j < n; j++) {
                        if (v [j] == copy [i] && x == -1) {
                            x = j + 1;
                            flare++;
                        }
                        else if (v [j] == copy [guess] && y == -1) {
                            y = j + 1;
                            flare++;
                        }
                    if (flare == 2)
                        break;
                }
                if (x < y) 
                    cout << x << " " << y << endl;
                else
                    cout << y << " " << x << endl;
                break;
            }
        }
        t--;
    }
    return 0;
}
