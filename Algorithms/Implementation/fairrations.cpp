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
    int N, sum = 0, i, ans = 0;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
       cin >> B[B_i];
       sum += B[B_i];
    }
    if (sum % 2 == 1)
        cout << "NO";
    else {
        for (i = 0; i < N; i++) {
            if (B[i] % 2 == 1) {
                B[i + 1]++;
                ans += 2;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}
