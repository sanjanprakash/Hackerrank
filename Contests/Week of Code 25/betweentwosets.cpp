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
    int n, temp, i;
    bool flag;
    int count = 0;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    temp = a[n - 1];
    while(temp <= b[0]) {
        flag = true;
        for (i = 0; i < n; i++) {
            if (temp % a[i] != 0) {
                flag = false;
                break;
            }
        }
        if (flag == false) {
            temp++;
            continue;
        }
        else {
            for (i = 0; i < m; i++) {
                if (b[i] % temp != 0) {
                    flag = false;
                    break;
                }
            }
            if (flag == false) {
                temp++;
                continue;
            }
        }
        if (flag == true) {
            count++;
        }
        temp++;
    }
    cout << count << endl;
    return 0;
}
