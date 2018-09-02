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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    long int arr[5] = {a,b,c,d,e}, i, su = 0;
    long int mini = INT_MAX,maxi = INT_MIN;
    for (i = 0; i < 5; i++) {
        su += arr[i];
        if (arr[i] < mini)
            mini = arr[i];
        if (arr[i] > maxi)
            maxi = arr[i];
    }
    cout << su - maxi << " " << su - mini << endl;
    return 0;
}
