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
    int n,i,j;
    cin >> n;
    vector<int> a(n);
    vector <int> count;
    for (i = 0; i < 100; i++)
        count.push_back(0);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       count[a[a_i] - 1]++;
    }
    int max = INT_MIN;
    for (i = 0; i < 99; i++) {
        if (count[i] + count[i + 1] > max)
            max = count[i] + count[i + 1];
    }
    cout << max;
    return 0;
}
