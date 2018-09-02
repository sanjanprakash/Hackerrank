#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long long int n,m,s, t;
    cin >> t;
    while (t > 0)
    {
       long long int ans;
        cin >> n >> m >> s;
        ans = (s + m - 1) % n;
        if (ans == 0)
            ans = n;
        cout << ans << endl;
        t--;
    }
    return 0;
}
