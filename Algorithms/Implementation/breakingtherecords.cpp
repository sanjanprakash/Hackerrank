#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    vector <int> X;
    int max = s[0], min = s[0], ma_c = 0, mi_c = 0;
    int i;
    for (i = 1; i < s.size(); i++) {
        if(s[i] < min){
            min = s[i];
            mi_c++;
        }
        else if (s[i] > max){
            max = s[i];
            ma_c++;
        }
    }
    X.push_back(ma_c);
    X.push_back(mi_c);
    return X;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
