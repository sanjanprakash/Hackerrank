#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    int l = 0, r = s.length() - 1, i;
    int ans_l,ans_r;
    bool left_wrong = true;
    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        }
        else
            break;
    }
    ans_l = l;
    ans_r = r;
    if (l >= r)
        return -1;
    l++;
    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        }
        else {
            left_wrong = false;
            break;
        }
    }
    return left_wrong ? ans_l : ans_r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
