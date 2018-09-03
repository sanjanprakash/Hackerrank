#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,i;
    int k, *arr;
    int sum = 0,sum_r = 0, count = 0;
    cin >> n >> k;
    arr = new int[n];
    vector<int> x(n);
    for(i = 0;i < n;i++){
       cin >> x[i];
    }
    sort(x.begin(),x.end());
    arr[0] = 0;
    for (i = 1; i < n; i++) {
        arr[i] = x[i] - x[i - 1];
    }
    i = 0;
    while (i < n) {
        sum = 0;
        arr[i] = 0;
        while (sum + arr[i] <= k) {
            sum += arr[i];
            i++;
        }
        sum_r = 0;
        count++;
        while (sum_r + arr[i] <= k) {
            sum_r += arr[i];
            i++;
        }
    }
    cout << count;
    return 0;
}
