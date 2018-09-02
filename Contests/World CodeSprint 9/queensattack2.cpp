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

int min (long long int a, long long int b) {
    if (a <= b)
        return a;
    return b;
}


int main(){
    long long int n, index;
    long long int k, count = 0;
    vector<long long int>col_eq, row_eq, r, c, r_d, c_d;
    cin >> n >> k;
    long long int rQueen;
    long long int cQueen;
    cin >> rQueen >> cQueen;
    for(int a0 = 0; a0 < k; a0++){
        long long int rObstacle;
        long long int cObstacle;
        cin >> rObstacle >> cObstacle;
        r.push_back(rObstacle);
        c.push_back(cObstacle);
        if (abs(rObstacle - rQueen) == abs(cObstacle - cQueen)) {
            r_d.push_back(rObstacle);
            c_d.push_back(cObstacle);
        }
        if (cObstacle == cQueen) {
            col_eq.push_back(rObstacle);
        }
        if (rObstacle == rQueen) {
            row_eq.push_back(cObstacle);
        }
        // your code goes here
    }
    col_eq.push_back(rQueen);
    row_eq.push_back(cQueen);
    r.push_back(rQueen);
    c.push_back(cQueen);
    std::vector<long long int>::iterator it;
    
    sort(col_eq.begin(),col_eq.end());
    sort(row_eq.begin(),row_eq.end());
    it = find (col_eq.begin(), col_eq.end(), rQueen);
    index = it - col_eq.begin();
    if (index == 0) {
        if (index == col_eq.size() - 1)
            count += n - 1;
        else 
            count += abs(col_eq[index] - col_eq[index + 1]) - 1;
    }
    else if (index == col_eq.size() - 1) {
        count += abs(col_eq[index] - col_eq[index - 1]) - 1;
        count += n - col_eq[index];
    }
    else {
        count += abs(col_eq[index] - col_eq[index - 1]) - 1;
        count += abs(col_eq[index] - col_eq[index + 1]) - 1;
    }
    
    it = find (row_eq.begin(), row_eq.end(), cQueen);
    index = it - row_eq.begin();
    if (index == 0) {
        if (index == row_eq.size() - 1)
            count += n - 1;
        else 
            count += abs(row_eq[index] - row_eq[index + 1]) - 1;
    }
    else if (index == row_eq.size() - 1) {
        count += abs(row_eq[index] - row_eq[index - 1]) - 1;
        count += n - row_eq[index];
    }
    else {
        count += abs(row_eq[index] - row_eq[index - 1]) - 1;
        count += abs(row_eq[index] - row_eq[index + 1]) - 1;
    }
    
    if (c_d.size() == 0) {
        //Top left diag
        count += min(cQueen - 1,n - rQueen);
        //Top right diag
        count += min(n - cQueen,n - rQueen);
        //Bottom left diag
        count += min(cQueen - 1,rQueen - 1);
        //Bottom right diag
        count += min(n - cQueen,rQueen - 1);
    }
    
    else {
        long long int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX, min4 = INT_MAX;
        for (index = 0; index < c_d.size(); index++) {
            //Top right diag
            if (c_d[index] > cQueen && r_d[index] > rQueen) {
                if (c_d[index] - cQueen - 1 < min1)
                    min1 = c_d[index] - cQueen - 1;
            }
            //Top left diag
            if (c_d[index] < cQueen && r_d[index] > rQueen) {
                if (r_d[index] - rQueen - 1 < min2)
                    min2 = r_d[index] - rQueen - 1;
            }
            //Bottom right diag
            if (c_d[index] > cQueen && r_d[index] < rQueen) {
                if (c_d[index] - cQueen - 1 < min3)
                    min3 = c_d[index] - cQueen - 1;
            }
            //Bottom left diag
            if (c_d[index] < cQueen && r_d[index] < rQueen) {
                if (cQueen - c_d[index] - 1 < min4)
                    min4 = cQueen - c_d[index] - 1;
            }
        }
        if (min1 != INT_MAX)
            count += min1;
        else {
           count += min(n - cQueen,n - rQueen); 
        }
        if (min2 != INT_MAX)
            count += min2;
        else {
           count += min(cQueen - 1,n - rQueen); 
        }
        if (min3 != INT_MAX)
            count += min3;
        else {
           count += min(n - cQueen,rQueen - 1); 
        }
        if (min4 != INT_MAX)
            count += min4;
        else {
           count += min(cQueen - 1,rQueen - 1);
        }
    }
    
    cout << count;
    return 0;
}
