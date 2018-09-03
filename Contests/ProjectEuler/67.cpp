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
        int r, i, j, temp;
        int row;
        vector <int> X;
        cin >> r;
        i = 0;
        while (i < (r * (r + 1)) / 2) {
            cin >> temp;
            X.push_back (temp);
            i++;
        }
        row = X.size ();
        while (r > 1) {
            row -= r;
            for (i = 0; i < r; i++) {
                if (X [row + i] > X [row + i + 1]) {
                    X [row - r + 1 + i] += X [row + i];
                    //cout << X [row - r + 1 + i] << " ";
                }
                else {
                    X [row - r + 1 + i] += X [row + i + 1]; 
                    //cout << X [row - r + 1 + i] << " ";
                }
            }
            r--;
        }
        cout << X [0] << endl;
        t--;
    }
    return 0;
}
