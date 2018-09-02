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

vector<int>lookup (string s) {
    int i;
    vector<int>weights;
    for (i = 0; i < s.length(); i++) {
        if (i == 0)
            weights.push_back(int(s[i]) - 96);
        else {
            if (s[i] == s[i - 1])
                weights.push_back(weights[weights.size() - 1] + int(s[i - 1]) - 96);
            else
                weights.push_back(int(s[i]) - 96);
        }
    }
    return weights;
}

int main(){
    string s;
    cin >> s;
    int n, i;
    cin >> n;
    vector<int>res;
    res = lookup(s);
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        if (find(res.begin(), res.end(), x) != res.end())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
