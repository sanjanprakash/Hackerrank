#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, d, temp, i, j, median, count = 0, check;
    float mid;
    cin >> n >> d;
    int *arr = new int[201];
    for (i = 0; i < 201; i++)
        arr[i] = 0;
    queue<int> X;
    for (i = 0; i < n; i++) {
        if (i < d) {
            cin >> temp;
            X.push(temp);
            arr[temp]++;
        }
        else {
            cin >> temp;
            check = 0;
            for (j = 0; j < 201; j++) {
                check += arr[j];
                if (check >= d/2)
                    break;
            }
            if (d % 2 == 1) {
                while(check<(d/2+1)){
                    j++;
                    check+=arr[j];
                }
                if (temp >= 2 * j)
                    count++;
            }
            else {
                if (check >= (d/2 + 1)){
                    mid = 2*float(j);
                }   
                else {
                    mid = float(j);
                    while (arr[j + 1] == 0)
                        j++;
                    mid += float(j + 1);
                }
                if (float(temp) >= mid) {
                    count++;
                }
            }
            arr[X.front()]--;
            arr[temp]++;
            X.pop();
            X.push(temp);
        }
    }
    cout << count << endl;
    return 0;
}
