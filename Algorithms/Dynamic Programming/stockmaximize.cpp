#include <iostream>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t > 0) {
        int n, i, k = 1, max = 0;
        long long int profit = 0;
        cin >> n;
        int arr [n];
        for (i = 0; i < n; i++)
            cin >> arr [i];
        for (i = n -1; i >= 0; i--) {
            if (arr [i] > max) 
                max = arr [i];
            profit += max - arr [i];
        }
        cout << profit << endl;
        t--;
    }
}
