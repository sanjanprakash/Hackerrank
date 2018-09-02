#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,c,m,i = 0;
    int s;
    int wrap;
    cin >> t;
    s = t;
    int arr [t];
    while(t--){
        cin >> n >> c >> m;
        int answer = 0;
        wrap = 0;
        wrap += n / c;
        answer += wrap;
        while (wrap >= m) {
            answer += wrap / m;
            wrap = wrap - (m * (wrap / m)) + wrap / m;
        }        
        cout << answer << endl;
    }
    
    return 0;
}
