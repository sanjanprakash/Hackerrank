#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, i, temp;
    bool flag;
    cin >> t;
    while (t > 0) {
        int n, k;
        flag = true;
        cin >> n >> k;
        vector<int>A,B;
        for (i = 0; i < n; i++) {
            cin >> temp;
            A.push_back(temp);
        }
        for (i = 0; i < n; i++) {
            cin >> temp;
            B.push_back(temp);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end(),greater<int>());
        for (i = 0; i < n; i++) {
            if (A[i] + B[i] < k) {
                flag = false;
                break;
            }
        }
        if (flag == false)
            cout << "NO\n";
        else
            cout << "YES\n";
        A.clear();
        B.clear();
        t--;
    }
    return 0;
}
