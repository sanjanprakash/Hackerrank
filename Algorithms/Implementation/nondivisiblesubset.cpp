#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i;
    int n, k, num, count = 0;
    cin >> n >> k;
    int rem [k];
    for (i = 0; i < k; i++)
        rem[i] = 0;
    for (i = 0; i < n; i++)
    {
        cin >> num;
        rem[num % k]++;
    }
    if (rem[0] > 0)
        count++;
    for (i = 1; i < k/2; i++)
    {
        if (rem[i] >= rem [k - i])
            count += rem[i];
        else
            count += rem[k - i];
    }
    if (k % 2 == 0 && rem[k/2] != 0)
        count++;
    else if (k % 2 == 1 && k > 1)
    {
        if (rem[k/2] > rem[k - (k/2)])
        {
            count += rem[k/2];
        }
        else if (rem[k/2] < rem[k - (k/2)])
        {
            count += rem[k - (k/2)];
        }
    }
    
    cout << count;
    return 0;
}
