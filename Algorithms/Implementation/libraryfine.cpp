#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct date {
    int day, month, year;
}a,e;

int main() {
    int fine;
    cin >> a.day >> a.month >> a.year;
    cin >> e.day >> e.month >> e.year;
    if (a.year < e.year) 
        fine = 0;   
    else if (a.year == e.year) {
        if (a.month > e.month) 
            fine = 500 * (a.month - e.month);
        else if (a.month == e.month) {
            if (a.day > e.day) 
                fine = 15 * (a.day - e.day);
            else
                fine = 0;
        }
        else
            fine = 0;
    }
    else
        fine = 10000;
    cout << fine;
    return 0;
}
