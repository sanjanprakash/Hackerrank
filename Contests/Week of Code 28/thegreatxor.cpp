#include <iostream>

using namespace std;

long long int Ans(long long int x) {
    long long int ans = 0, k = 1;
    while (x > 0) {
        if (x % 2 == 0)
            ans += k;
        x /= 2;
        k *= 2;
    }    
    return ans;
}

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long long int x;
        cin >> x;
        cout << Ans(x) << endl;
    }
    return 0;
}
