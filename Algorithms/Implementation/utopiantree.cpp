#include <iostream>
using namespace std;

int height(int n) {
    int h = 1;
    int j = 1;
    while (j <= n) {
        if (j % 2 == 1)
            h = h * 2;
        else if (j % 2 == 0)
            h++;
        j++;
    }
    return h;
}
int main() {
    int T;
    int i = 0;
    cin >> T;
    int *arr = new int [T];
    while (i < T) {
        int n;
        cin >> n;
        arr [i] = height(n);
        i++;
    }
    for (i = 0; i < T; i++)
        cout << arr [i] << endl;
    return 0;
}
