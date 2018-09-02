#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    int start = p/2;
    int end;
    if (n % 2 == 0)
        end = (n - p + 1)/2;
    else
        end = (n - p)/2;
    return start < end ? start : end;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
