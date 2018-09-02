#include <bits/stdc++.h>

using namespace std;

int patternCount(string s){
    int i = 0, count = 0, occur = 0;
    bool state = false;
    while (i < s.length()) {
        if (s[i] == '1' && state == false)
            state = true;
        else if (state == true && s[i] == '0')
            count++;
        else if (state == true && s[i] != '0' && s[i] != '1') {
            state = false;
            count = 0;
        }
        else if (state == true && s[i] == '1' && count > 0) {
            occur++;
            count = 0;
        }
        i++;
    }
    return occur;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = patternCount(s);
        cout << result << endl;
    }
    return 0;
}
