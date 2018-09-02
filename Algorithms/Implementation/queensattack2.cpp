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

int min(int a, int b) {
    return a < b ? a : b;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    int uld = INT_MAX,urd = INT_MAX,dld = INT_MAX,drd = INT_MAX,u = INT_MAX,d = INT_MAX,l = INT_MAX,r = INT_MAX;
    if (rQueen == 1) {
        uld = 0;
        u = 0;
        urd = 0;
    }
    else if (rQueen == n) {
        dld = 0;
        d = 0;
        drd = 0;
    }
    if (cQueen == 1) {
        dld = 0;
        l = 0;
        uld = 0;
    }
    else if (cQueen == n) {
        drd = 0;
        r = 0;
        urd = 0;
    }
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        //int uld = INT_MAX,urd = INT_MAX,dld = INT_MAX,drd = INT_MAX,u = INT_MAX,d = INT_MAX,l = INT_MAX,r = INT_MAX;
        if (rObstacle == rQueen) {
            if (cObstacle < cQueen && l > cQueen - cObstacle - 1)
                l = cQueen - cObstacle - 1;
            else if (cObstacle > cQueen && r > cObstacle - cQueen - 1)
                r = cObstacle - cQueen - 1;
        }
        else if (cObstacle == cQueen) {
            if (rObstacle < rQueen && u > rQueen - rObstacle - 1)
                u = rQueen - rObstacle - 1;
            else if (rObstacle > rQueen && d > rObstacle - rQueen - 1)
                d = rObstacle - rQueen - 1;
        }
        else if (rObstacle < rQueen && cQueen - cObstacle == rQueen - rObstacle && uld > rQueen - rObstacle - 1)
            uld = rQueen - rObstacle - 1;
        else if (rObstacle < rQueen && cObstacle - cQueen == rQueen - rObstacle && urd > rQueen - rObstacle - 1)
            urd = rQueen - rObstacle - 1;
        else if (rObstacle > rQueen && cQueen - cObstacle == rObstacle - rQueen && dld > rObstacle - rQueen - 1)
            dld = rObstacle - rQueen - 1;
        else if (rObstacle > rQueen && cObstacle - cQueen == rObstacle - rQueen && drd > rObstacle - rQueen - 1)
            drd = rObstacle - rQueen - 1;
    }
    if (u == INT_MAX)
        u = rQueen - 1;
    if (d == INT_MAX)
        d = n - rQueen;
    if (l == INT_MAX)
        l = cQueen - 1;
    if (r == INT_MAX)
        r = n - cQueen;
    if (uld == INT_MAX)
        uld = min(rQueen - 1,cQueen - 1);
    if (urd == INT_MAX)
        urd = min(n - cQueen,rQueen - 1);
    if (dld == INT_MAX)
        dld = min(n - rQueen,cQueen - 1);
    if (drd == INT_MAX)
        drd = min(n - rQueen,n - cQueen);
    //cout << u << " " << r << " " << l << " " << d << " " << urd << " " << uld << " " << drd << " " << dld << endl;
    cout << u + l + r + d + urd + uld + drd + dld;
    return 0;
}
