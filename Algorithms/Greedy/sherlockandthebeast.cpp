#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getPivot(int n) {
    while(n > 0) {
        if(n%3 == 0)
            break;
        else
            n -= 5;
    }
    return n;
}

int main() {
    int t, n;
    cin >> t;
    while (t > 0) {
        cin >> n;
        int pivot = getPivot(n);
        if(pivot < 0) 
            cout << "-1" << endl;
        else {
            int repeat = pivot/3;
            while(repeat--)
                cout << "555";
            repeat = (n-pivot)/5;
           while(repeat--)
             cout << "33333";
            cout << endl;
        }
        t--;
    }
  
    return 0;
}
