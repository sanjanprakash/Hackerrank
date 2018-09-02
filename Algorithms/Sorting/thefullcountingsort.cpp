#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    vector <string> X;
    int num;
};

int main() {
    int n, temp;
    string x;
    cin >> n;
    Node arr [n];
    int i, j = 0;
    for (i = 0; i < n; i++)
        arr [i].num = 0;
    while (j < n) {
        if (j < n / 2) {
            cin >> temp >> x;
            x = "-";
            arr [temp].num++;
            arr [temp].X.push_back (x);
        }
        else {
            cin >> temp >> x;
            arr [temp].num++;
            arr [temp].X.push_back (x);
        }
        j++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < arr [i].X.size (); j++)
            cout << arr [i].X [j] << " ";
    }
    return 0;
}
