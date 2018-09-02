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
    int n, p;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int grade;
        cin >> grade;
        if (grade < 38) 
            cout << grade << endl;
        else {
            p = grade % 5;
            if (p < 3)
                cout << grade << endl;
            else {
                cout << grade + 5 - p << endl;
            }
        }
    }
    return 0;
}
