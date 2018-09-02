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
    string s, t;
    int k, count, i;
    bool flag;
    cin >> s;
    cin >> t;
    cin >> k;
    if (s == t) {
        if (k % 2 == 0)
            flag = true;
        else {
            if (k > 2 * s.length())
                flag = true;
            else
                flag = false;
        }
    }
    else if (k >= s.length() + t.length())
        flag = true;
    else {
        i = 0;
        while (i < s.length() && s[i] == t[i])
            i++;
        count = s.length() + t.length() - 2*i;
        if (count > k)
            flag = false;
        else {
            if ((k - count) % 2 == 0)
                flag = true;
            else
                flag = false;
        }
    }
    if (flag == true)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
