#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin >> s;
    int arr [26], i;
    for (i = 0; i < 26; i++) 
        arr [i] = 0;

    for (i = 0; i < s.length (); i++) {
        if (arr [int (s [i]) - 97] == 0)
            arr [int (s [i]) - 97]++;
        else
            arr [int (s [i]) - 97]--;    
    }
    int sum = 0;
    for (i = 0; i < 26; i++) {
        sum += arr [i];
    }
    int flag = 0;
    if (sum == 1 || sum == 0)
        flag = 1;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
