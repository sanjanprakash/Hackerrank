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
    int n,i,j = -1,max = -2;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    sort(c.begin(),c.end());
    for(i = 0; i < n; i++) {
        if(j == -1) {
            if (max < c[0] - i)
                max = c[0] - i;
        }
        else if(abs(c[j] - i) < abs(c[j+1] - i)) {
            if(max < abs(c[j] - i))
               max = abs(c[j] - i);
        }
        else {
            if (max < abs(c[j+1] - i))
                max = abs(c[j+1] - i);
        }
        if(i == c[j+1])
            j++;
    }
    cout << max;
    return 0;
}
