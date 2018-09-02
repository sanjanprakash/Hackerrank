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
    long long int n, temp, i;
    cin >> n;
    vector<long long int> scores;
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> temp;
       if (scores.empty() || scores[scores.size() - 1] != temp)
           scores.push_back(temp);
    }
    long long int m, sc, tot = 0;
    cin >> m;
    
    for (i = 0; i < m; i++) {
        cin >> sc;
        
        while (scores[scores.size() - 1] <= sc && !scores.empty()) {
            scores.pop_back();
        }
        cout << scores.size() + 1 << endl;
    } 
    return 0;
}
