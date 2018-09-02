#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i = 0,temp,flag = -1;
    cin >> n;
    vector<int> X;
    for (i = 0; i < n; i++) {
       cin >> temp;
       X.push_back(temp);
    }
    sort(X.begin(),X.end());
    for(i = n - 1; i > 1; i--) {
        if(X[i] < X[i - 1] + X[i - 2]) {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << X[i - 2] << " " << X[i - 1] << " " << X[i] << endl;
    else
        cout << flag << endl;
    return 0;
}
