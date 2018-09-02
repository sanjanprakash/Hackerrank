#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    int i, sum = 0, count = 0;
    for (i = 0; i < m; i++)
        sum += s[i];
    if (sum == d)
        count++;
    while (i < s.size()) {
        sum = sum - s[i - m] + s[i];
        if (sum == d)
            count++;
        i++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
