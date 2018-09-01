#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void op(string s1, string s2){
int n1 = s1.length();
int n2 = s2.length();
int* array1 = new int[26];
int* array2 = new int[26];
    for (int i = 0; i < 26; i++) {
        array1 [i] = 0;
        array2 [i] = 0;
    }
for(int i=0;i<n1;i++){
    char c=s1[i];
    array1[c-97]++;
}
for(int i = 0; i < n2; i++){
        char c = s2[i];
        array2[c - 97]++;
}
int sum = 0;
for(int i = 0; i < 26; i++){
    sum+=abs(array1[i] - array2[i]);
}
cout << sum << endl;
delete[] array1;
delete[] array2;
}

int main () {
    string a, b;
    cin >> a;
    cin >> b;
    op (a, b);
    return 0;
}
