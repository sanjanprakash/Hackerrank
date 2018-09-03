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

struct tri {
    int a, b, c;
};

int check (int a, int b, int c) {
    if (a*a + b*b > c*c)
        return -1;
    else if (a*a + b*b == c*c)
        return 0;
    else
        return 1;
}

int main(){
    int N, i, j, k;
    int acute = 0, rt = 0, obtuse = 0;
    cin >> N;
    tri temp;
    vector<int> A(N);
    for(int i = 0;i < N;i++){
       cin >> A[i];
       if (i > 1) {
           for (j = 0; j <= i - 2; j++) {
               for (k = j + 1; k <= i - 1; k++) {
                    if (A [j] + A [k] > A [i]) {
                        temp.a = A [j];
                        temp.b = A [k];
                        temp.c = A [i];
                        if (check (temp.a, temp.b, temp.c) == -1)
                            acute++;
                        else if (check (temp.a, temp.b, temp.c) == 0)
                            rt++;
                        else
                            obtuse++;
                    }   
               }
           }
       }
    }
    
    cout << acute << " " << rt << " " << obtuse;
    return 0;
}
