#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {
    int shift = ar [ar.size () - 1];
    int i = ar.size () - 2, j;
    while ((ar [i] > shift)&&(i >= 0)) {
        ar [i + 1] = ar [i];
        i--;
        for (j = 0; j < ar.size (); j++)
            cout << ar [j] << " ";
        cout << endl;
    }
    ar [i + 1] = shift;
    for (j = 0; j < ar.size (); j++)
            cout << ar [j] << " ";
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

insertionSort(_ar);
   
   return 0;
}
