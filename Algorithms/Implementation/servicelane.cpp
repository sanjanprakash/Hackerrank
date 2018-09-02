#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, t, i, j;
    int start, end, min;
    cin >> n >> t;
    int arr [n];
    for (i = 0; i < n; i++) 
        cin >> arr [i];
    i = 0;
    while (i < t) {
        cin >> start >> end;
        min = arr [start];
        for (j = start + 1; j <= end; j++) {
            if (arr [j] < min)
                min = arr [j];
        }
        cout << min << endl;
        i++;
    }
    return 0;
}
