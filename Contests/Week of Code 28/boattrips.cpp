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
    int n, p_i;
    int c;
    int m;
    cin >> n >> c >> m;
    vector<int> p(n);
    for(p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
       if (p[p_i] > c * m) {
           cout << "No";
           break;
       }
    }
    if (p_i == n)
        cout << "Yes";
    return 0;
}
