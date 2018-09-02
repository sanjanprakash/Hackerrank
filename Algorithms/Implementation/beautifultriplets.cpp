#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int find (vector<int>X, int num, int s) {
    int res = -1, i, j;
    int start = s, end = X.size() - 1;
    int mid = (start + end)/2;
    while (start != mid && end != mid) {
        //cout << start << " " << mid << " " << end << endl;
        if (num < X[mid]) {
            end = mid;
            mid = (start + end)/2;
        }
        else if (num > X[mid]) {
            start = mid;
            mid = (start + end)/2;
        }
        else
            return mid;
    }
    if (start == mid && X[end] == num)
        return end;
    if (end == mid && X[start] == num)
        return start;
    return res;
}

int main() {
    int n, d, temp;
    int i, j, k, count = 0;
    int ans;
    vector<int> X;
    cin >> n >> d;
    for (i = 0; i < n; i++) {
        cin >> temp;
        X.push_back(temp);
    }
    for (i = 0; i < n - 2; i++) {
        j = find(X,d + X[i],i);
        if (j != -1) {
            k = find(X,d + X[j],j);
            if (k != -1)
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
