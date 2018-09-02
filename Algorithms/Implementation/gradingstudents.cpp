#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    vector <int> X;
    int temp, i;
    for (i = 0; i < grades.size(); i++) {
        if (grades[i] % 5 > 2 && grades[i] >= 38)
            temp = grades[i] + (5 - (grades[i] % 5));
        else
            temp = grades[i];
        X.push_back(temp);
    }
    return X;
}

int main() {
    int n,i;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;

    return 0;
}
