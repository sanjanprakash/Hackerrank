#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, temp;
    cin >> n;
    int arr [100];
    for (i = 0; i < 100; i++)
        arr [i] = 0;
    while (n > 0) {
        cin >> temp;
        arr [temp]++;
        n--;
    }
    for (i = 0; i < 100; i++)
        cout << arr [i] << " ";
    return 0;
}
