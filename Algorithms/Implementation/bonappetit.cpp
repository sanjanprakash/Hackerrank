#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, i = 0, sum = 0,b;
    cin >> n >> k;
    int num[n];
    while (i < n)
    {
        cin >> num[i];
        sum += num[i];
        i++;
    }
    cin >> b;
    if (b == (sum - num[k])/2)
        cout << "Bon Appetit\n";
    else
        cout << b - (sum/2) + (num[k]/2) << endl;
    return 0;
}
