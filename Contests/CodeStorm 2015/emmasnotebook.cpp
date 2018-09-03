#include <iostream>

using namespace std;

long long ans (int x) {
    long long answer = 0;
    while (x > 0) {
        answer += (x / 2) + 1;
        x--;
    }
    return answer;
}

int main(){
    int t;
    cin >> t;
    cout << ans (t);
    return 0;
}
