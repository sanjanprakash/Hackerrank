#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, m, k;
        cin >> n;
        int arr [(n * (n + 1)) / 2];
        int i;
        for (i = 0; i < (n * (n + 1)) / 2; i++)
            cin >> arr [i];
         
        for (m = n - 1; m > 0; m--)   
            for (k = (m * (m - 1)) / 2; k < (m * (m + 1)) / 2; k++)
                arr [k] += max (arr [k + m], arr [k + m + 1]);
 
        cout << arr [0] << "\n";
        t--;
    }
    return 0;
}
