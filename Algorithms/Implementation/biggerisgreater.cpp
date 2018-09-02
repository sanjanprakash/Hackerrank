#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    int i,j,k;
    char temp;
    string a,b;
    cin >> t;
    while (t > 0)
    {
        cin >> a;
        b = a;
        i = -1;
        j = -1;
        for (k = 0; k < a.length() - 1; k++)
        {
            if (a[k] < a[k + 1] && k >= i)
                i = k + 1;
            //cout << "I is " << i << " and K is " << k << endl;
        }
        for (k = i; k < a.length(); k++)
        {
            if (a[k] > a[i - 1] && k > j)
                j = k;
        }
        //cout << i << " " << j << endl;
        temp = a[j];
        a[j] = a[i - 1];
        a[i - 1] = temp;
        //cout << a << endl;
        reverse(a.begin()+i,a.end());
        if (i == -1 && j == -1)
            cout << "no answer\n";
        else
            cout << a << endl;
        t--;
    }
    return 0;
}
