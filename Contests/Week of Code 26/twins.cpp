#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime (long long int n) {
    if (n == 1)
        return false;
    else if (n == 2)
        return true;
    else {
        int i;
        if (n % 2 == 0)
            return true;
        for (i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

int main() {
    long long int m,n,i;
    int count = 0;
    cin >> m >> n;
    if (m % 2 == 0)
        m++;
    i = m;
    while (i < n) {
        if (isPrime (i) == true && isPrime(i + 2) == true) {
            count++;
        }
        i += 2;
    }
    cout << count;
    return 0;
}
