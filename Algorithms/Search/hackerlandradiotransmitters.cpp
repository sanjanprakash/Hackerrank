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

int Ans(vector<int> X, int k) {

    int ret = 0; 
    int n = X.size();
    int i = 0;
    while (i < n) {
        int j = i + 1;
        while (j < n && X[i] >= X[j] - k) {
            j += 1;
        }
        ret += 1;

        while (i < n && X[i] <= X[j - 1] + k) {
            i += 1;
        }
    }
    return ret;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    sort(x.begin(),x.end());
    cout << Ans(x,k);
    return 0;
}
