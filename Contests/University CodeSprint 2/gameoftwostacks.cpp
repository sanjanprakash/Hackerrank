#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, n, m, x, ans;
    cin >> q;
    while(q--)
    {
        cin >> n >> m >> x;
        vector<long long int> a(n), b(m);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < m; i++)
            cin >> b[i];
        for(int i = 1; i < n; i++)
            a[i] += a[i-1];
        for(int i = 1; i < m; i++)
            b[i] += b[i-1];
        ans = upper_bound(b.begin(), b.end(), x) - b.begin();
        for(int i = 0; i < n; i++)
        {
            if(a[i] <= x)
                ans = max(ans, (int)(upper_bound(b.begin(), b.end(), x - a[i]) - b.begin()) + i + 1);
        }
        cout << ans << "\n";
    }
    return 0;
}
