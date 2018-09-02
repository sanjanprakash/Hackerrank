#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i, j;
    int n;
    cin >> n;
    char arr [n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cin >> arr [i][j];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > 0 && i < n - 1 && j > 0 && j < n - 1){
                if (arr [i][j] > arr [i][j - 1] && arr [i][j] > arr [i][j+1] && arr [i][j] > arr[i - 1][j] && arr[i][j] > arr [i + 1][j])
                            arr [i][j] = 'X'; 
            }
            cout << arr [i][j];
        }
        cout << endl;
    }
    return 0;
}
