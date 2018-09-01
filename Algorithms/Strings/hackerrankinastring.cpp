#include <bits/stdc++.h>
#include <string>

using namespace std;

string Check(string s) {
    string str = "hackerrank";
    if (s.length() < 10)
        return "NO";
    else {
        int i, j = 0;
        for (i = 0; i < s.length(); i++) {
            if (j < 10 && s[i] == str[j])
                j++;
        }
        return j == 10 ? "YES" : "NO";
    }
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        cout << Check(s) << endl;
    }
    return 0;
}
