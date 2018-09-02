#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdint>
#include <algorithm>
using namespace std;

long long int Count (int arr [], int num, int tot) {
    long long int tab [tot + 1][num], x, y;
    int i, j;
    for (i = 0; i < num; i++)
        tab [0][i] = 1;
    for (i = 1; i < tot + 1; i++) {
        for (j = 0; j < num; j++) {
            if (i - arr [j] >= 0)
                x = tab [i - arr [j]][j];
            else
                x = 0;
            if (j >= 1) 
                y = tab [i][j - 1];
            else
                y = 0;
            tab [i][j] = x + y;
        }
    }
    return tab [tot][num -1];
}

int main() {
    int total, num, i;
    cin >> total >> num;
    int arr [num];
    for (i = 0; i < num; i++)
        cin >> arr [i];
    cout << Count (arr, num, total);
    return 0;
}
