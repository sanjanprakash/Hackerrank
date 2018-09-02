#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string x;
    int i, j, k = 0, r, c;
    getline (cin, x);


    c = ceil (sqrt (x.length ()));
    r = floor (sqrt (x.length ()));
    if(c == r)
        r--;
    for(i = 0; i <= r; i++)
    {
        for(j = i; j < x.length(); j += c)
            cout << x[j];
        cout << " ";
    }
    cout << endl;
    return 0;
}
