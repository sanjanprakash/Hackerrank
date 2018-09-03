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
using namespace std;


int main(){
    int t;
    cin >> t;
    int count;
    for(int a0 = 0; a0 < t; a0++){
        count = 0;
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
           if (a_i > 0) {
               if (a [a_i] == 0 && a [a_i - 1] == 0) {
                   count++;
                   a [a_i] = 1;
               }
           }
           
        }
        cout << count << endl;
    }
    return 0;
}
