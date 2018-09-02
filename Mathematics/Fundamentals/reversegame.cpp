#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,k,index;
    cin >> t;
    while(t > 0) {
        cin >> n >> k;
        if(n % 2 == 0) {
            if(k < n/2)
                index = 2*k + 1;
            else if (k > n/2)
                index = 2*(n - 1 - k);
        }
        else if (n % 2 != 0) {
            if(k < (n - 1)/2)
                index = 2*k + 1;
            else if (k >= (n - 1)/2)
                index = 2*(n - 1 - k);
        }
        cout << index << endl;
       t--;
    }

    return 0;
}
