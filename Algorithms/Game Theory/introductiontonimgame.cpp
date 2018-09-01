#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t;
    cin >> n;
    while (n > 0) {
        cin >> t;
        int temp, ans;
        cin >> ans;
        t--;
        while (t > 0) {
            cin >> temp;
            ans ^= temp;
            t--;
        }
        if (ans == 0)
            cout << "Second\n";
        else
            cout << "First\n";
        n--;
    }
    return 0;
}
