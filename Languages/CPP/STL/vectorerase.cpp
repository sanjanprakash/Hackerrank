#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a, num, b, c;
    cin >> n;
    vector <int> x;
    for (int i = 0; i < n; i++) {
        cin >> num;
        x.push_back (num);
    }
    cin >> a;
    x.erase (x.begin () + a - 1);
    //for (int i = 0; i < x.size (); i++)
      //  cout << x [i] << " ";
    //cout << endl;
    cin >> b >> c;
    x.erase (x.begin () + b - 1, x.begin () + c - 1);
    cout << x.size () << endl;
    for (int i = 0; i < x.size (); i++)
        cout << x [i] << " ";
    return 0;
}
