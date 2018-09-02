#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int size, int ar []) {
    int temp, i, j;
    for (i = 1; i < size; i++) {
        for (j = i; j > 0; j--) {
            if (ar [j] < ar [j - 1]) {
                temp = ar [j];
                ar [j] = ar [j - 1];
                ar [j - 1] = temp;
            }
            else
                break;
        }
    }
    for (j = 0; j < size; j++)
            cout << ar [j] << " ";
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
        cin >> _ar[_ar_i];

   insertionSort(_ar_size, _ar);
   
   return 0;
}
