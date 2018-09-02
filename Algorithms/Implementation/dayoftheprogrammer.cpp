#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    string ans;
    if (year == 1918)
        ans = "26.09.1918";
    else {
        if (year >= 1700 && year < 1918) {
            if (year % 4 == 0)
                ans = "12.09." + to_string(year);
            else
                ans = "13.09." + to_string(year);
        }
        else {
            if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) 
                ans = "12.09." + to_string(year);
            else
                ans = "13.09." + to_string(year);
        }
    }
    return ans;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
