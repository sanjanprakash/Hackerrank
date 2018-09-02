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

bool Check(int *boxes,int *balls,int n) {
    int i, j, temp;
    bool ans = true;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (balls[i] == boxes[j]) {
                temp = boxes[j];
                boxes[j] = boxes[i];
                boxes[i] = temp;
                break;
            }
        }
        if (j == n)
            return false;
    }
    return ans;
}

int main(){
    int q, i, j, num;
    bool res;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        int *boxes = new int[n], *balls = new int[n];
        for (i = 0; i < n; i++) {
            boxes[i] = 0;
            balls[i] = 0;
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cin >> num;
                boxes[i] += num;
                balls[j] += num;
            }
        }
        res = Check(boxes,balls,n);
        if (res == false)
            cout << "Impossible\n";
        else
            cout << "Possible\n";
    }
    return 0;
}
