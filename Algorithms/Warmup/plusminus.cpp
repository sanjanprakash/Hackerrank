#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i;
    float pos = 0, neg = 0, z = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++) {
        if (arr[i] == 0)
            z++;
        else if (arr[i] < 0)
            neg++;
        else
            pos++;        
    }
    pos = pos / n;
    neg = neg / n;
    z = z / n;
    printf ("%.3f\n%.3f\n%.3f", pos, neg, z);
    return 0;
}
