#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num, sum = 0;
    int num1;
    cin >> num;
    int i = 0;
    while (i < num) {
        cin >> num1;
        sum = sum + num1;
        i++;
    }
    cout << sum;
    return 0;
}
