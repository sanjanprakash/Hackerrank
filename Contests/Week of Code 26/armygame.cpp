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
    int m;
    cin >> n >> m;
    if (m % 2 == 1)
        m = (m/2) + 1;
    else
        m = m/2;
    if (n % 2 == 1)
        n = (n/2) + 1;
    else
        n = n/2;
    cout << m*n;
    return 0;
}
