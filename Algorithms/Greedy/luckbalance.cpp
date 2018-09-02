#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,p,q,i;
    int sum = 0;
    vector<int>imp;
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (q == 1)
            imp.push_back(p);
        sum += p;
    }
    sort(imp.begin(),imp.end());
    n = imp.size();
    for(i = n - 1; i >= 0; i--)
    {
        //cout << i << " " << n - k << endl;
        if (i < n - k) {
            sum -= (2 * imp[i]);
           // cout << "jef";
        }
    }
    cout << sum << endl;
    return 0;
}
