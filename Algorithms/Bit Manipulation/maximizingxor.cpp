#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

string Bin(int a) {
    string ans = "";
    while (a > 0) {
        if (a % 2 == 0)
            ans = "0" + ans;
        else
            ans = "1" + ans;
        a /= 2;
    }
    return ans;
}

string *Config(string a, string b) {
    int len, i;
    string add = "";
    if (a.length() > b.length()) {
        len = a.length() - b.length();
        for (i = 0; i < len; i++)
            add += "0";
        b = add + b;
    }
    else {
        len = b.length() - a.length();
        for (i = 0; i < len; i++)
            add += "0";
        a = add + a;
    }
    string *arr = new string[2];
    arr[0] = a;
    arr[1] = b;
    return arr;
}

int Dec(string bin) {
    int ans = 0;
    int len = bin.length();
    int i = 0;
    int pow = 1;
    while (i < len) {
        if (bin[len - i - 1] == '1')
            ans += pow;
        pow *= 2;
        i++;
    }
    return ans;
}

string maxXor(string l, string r) {
    string ans;
    int i = 0;
    while (l[i] == r[i]) {
        ans += "0";
        i++;
    }
    while (i < l.length()) {
        if (l[i] != r[i] || (r[i] == '1') || (l[i] == '0')) 
            ans += "1";
        else
            ans += "0";
        i++;
    }
    return ans;
}

int main() {
    string res;
    int _l;
    string *arr,l,r;
    cin >> _l;
    l = Bin(_l);
    int _r;
    cin >> _r;
    r = Bin(_r);
    arr = Config(l,r);
    //cout << arr[0] << " " << arr[1] << endl;
    res = maxXor(arr[0], arr[1]);
    //cout << res << endl;
    cout << Dec(res) << endl;
    
    return 0;
}
