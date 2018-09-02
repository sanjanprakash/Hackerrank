#include <bits/stdc++.h>

using namespace std;

bool Compare(string x, string y) {
    if (x.length() == y.length())
        return x < y;
    else
        return x.length() < y.length();
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(),unsorted.end(),Compare);
    for (int i = 0; i < n; i++)
        cout << unsorted[i] << endl;
    // your code goes here
    return 0;
}
