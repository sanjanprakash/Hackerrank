#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, i, j;
    cin >> t;
    int arr[t], count[t], arr_copy;
    for (i = 0; i < t; i++) {
        cin >> arr[i];
        count[i] = 0;
    }
    for (i = 0; i < t; i++) {
        arr_copy = arr[i];
        while (arr[i] != 0) {
            if (arr[i] % 10 != 0) {
                if (arr_copy % (arr[i] % 10) == 0)
                    count[i]++;
            }
            arr[i] = arr[i] / 10;
        }
        cout << count[i] << endl;
    }
    return 0;
}
