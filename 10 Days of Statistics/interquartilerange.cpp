#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct box {
    double element;
    int count;  
};

bool compare(const box &a, const box &b) {
    return a.element < b.element;
}

int main() {
    int n,i;
    struct box temp;
    cin >> n;
    vector <box> arr;
    for (i = 0; i < n; i++) {
        arr.push_back(temp); 
        cin >> arr[i].element;
    }
    for (i = 0; i < n; i++) 
        cin >> arr[i].count;
    sort(arr.begin(),arr.end(),compare);
    vector <int> cum_cnt;
    cum_cnt.push_back(arr[0].count);
    for (i = 1; i < n; i++) 
        cum_cnt.push_back(cum_cnt[i - 1] + arr[i].count);
    vector<int>::iterator lower,lower1;
    int m = cum_cnt[n - 1];
    double q1,q3;
    int s = m/2;
    if (m % 2 == 1) {
        if (s % 2 == 1) {
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s/2 + 1);
            q1 = arr[lower - cum_cnt.begin()].element;
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s + s/2 + 2);
            q3 = arr[lower - cum_cnt.begin()].element;
        }
        else {
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s/2);
            lower1 = lower_bound(cum_cnt.begin(),cum_cnt.end(),s/2 + 1);
            q1 = (arr[lower - cum_cnt.begin()].element + arr[lower1 - cum_cnt.begin()].element)/2;
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s + s/2 + 1);
            lower1 = lower_bound(cum_cnt.begin(),cum_cnt.end(),s + s/2 + 2);
            q3 = (arr[lower - cum_cnt.begin()].element + arr[lower1 - cum_cnt.begin()].element)/2;
        }
    }
    else {
        if (s % 2 == 1) {
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s/2 + 1);
            q1 = arr[lower - cum_cnt.begin()].element;
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s + s/2 + 1);
            q3 = arr[lower - cum_cnt.begin()].element;
        }
        else {
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s/2);
            lower1 = lower_bound(cum_cnt.begin(),cum_cnt.end(),s/2 + 1);
            q1 = (arr[lower - cum_cnt.begin()].element + arr[lower1 - cum_cnt.begin()].element)/2;
            lower = lower_bound(cum_cnt.begin(),cum_cnt.end(),s + s/2);
            lower1 = lower_bound(cum_cnt.begin(),cum_cnt.end(),s + s/2 + 1);
            q3 = (arr[lower - cum_cnt.begin()].element + arr[lower1 - cum_cnt.begin()].element)/2;
        }
    }
    printf("%.1f",q3 - q1);
    return 0;
}
