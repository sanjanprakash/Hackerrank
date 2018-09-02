#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Check (int a, int b) {
	int diff;
	double root_a, intpart_a, fractpart_a;
	double root_b, intpart_b, fractpart_b;
	root_a = sqrt (a);
	fractpart_a = modf (root_a , &intpart_a);
	root_b = sqrt (b);
	fractpart_b = modf (root_b , &intpart_b);
	if (fractpart_a == 0 && fractpart_b == 0) {
		diff = intpart_b - intpart_a + 1;
	}
	else if (fractpart_a == 0)
		diff = intpart_b - intpart_a + 1;
	else
		diff = intpart_b - intpart_a;
	return diff;
}

int main() {
    int i, j, t;
    int count = 0;
    int *arr;
    int sqrt_a, sqrt_b;;
    int a, b;
    cin >> t;
    arr= new int [t];
    for (i =0; i < t; i++) {
        cin >> a >> b;
        arr [i] = Check (a, b);
    }
    for (i = 0; i < t; i++)
        cout << arr [i] << endl;
    return 0;
}
