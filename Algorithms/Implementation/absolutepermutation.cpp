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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, i, j;
        int k;
        cin >> n >> k;
        if (k == 0) {
            for (i = 0; i < n; i++)
                cout << i + 1 << " ";
            cout << endl;
        }
        else {
            if (n % k != 0 || (n/k) % 2 != 0)
                cout << "-1\n";
            else {
                bool odd = true;
                int count = 0;
                i = k + 1;
                while (count < n) {
                    if (odd == true) {
                        j = 0;
                        while (j < k) {
                            cout << i << " ";
                            count++;
                            i++;
                            j++;
                        }
                        i -= (2 * k);
                        odd = false;
                    }
                    else {
                        j = 0;
                        while (j < k) {
                            cout << i << " ";
                            count++;
                            i++;
                            j++;
                        }
                        i += (2 * k);
                        odd = true;
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}
