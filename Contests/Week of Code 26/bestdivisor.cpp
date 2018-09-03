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

int sum_dig (int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    int max_sum = -1;
    int sum;
    int best, i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum = sum_dig(i);
            if (sum > max_sum) {
                max_sum = sum;
                best = i;
            }
        }
    }
    cout << best;
    return 0;
}
