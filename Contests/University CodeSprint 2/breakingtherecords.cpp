#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, min, max, hi = 0, lo = 0;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
       if (score_i == 0) {
           max = score[score_i];
           min = score[score_i];
       }
       else {
           if (score[score_i] < min) {
               min = score[score_i];
               lo++;
           }
           if (score[score_i] > max) {
               max = score[score_i];
               hi++;
           } 
       }
    }
    cout << hi << " " << lo;
    return 0;
}
