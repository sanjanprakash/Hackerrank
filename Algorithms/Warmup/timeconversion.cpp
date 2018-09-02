#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int i;
    string time;
    cin >> time;
    if (time [8] == 'A') {
        if (time [0] == '1' && time [1] == '2') {
            time [0] = time [0] - 1;
            time [1] = time [1] - 2;
        }
        for (i = 0; i < 8; i++)
            cout << time [i];
    }
    else {
        if (time [0] != '1' || time [1] != '2') {
            (time [0]) = (time [0]) + 1;
            (time [1]) = (time [1]) + 2;
        }
        for (i = 0; i < 8; i++)
            cout << time [i];
    }
    return 0;
}
