#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n, x;
    map<int, int> a, b;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        b[x]++;
    }
    int ans = 0;
    for(auto& x: a)
        ans += min(x.second, b[x.first]);
    if (ans < n)
        cout << ans + 1 << "\n";
    else
        cout << ans - 1 << "\n";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
