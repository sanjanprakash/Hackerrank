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
    int n;
    int k;
    int e = 100;
    int pos = 0;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    while (1)
    {
        pos = (pos + k) % n;
        if (c[pos] == 1)
            e -= 3;
        else if (c[pos] == 0)
            e -= 1;
        if (pos == 0)
            break;
    }
    cout << e;
    return 0;
}
