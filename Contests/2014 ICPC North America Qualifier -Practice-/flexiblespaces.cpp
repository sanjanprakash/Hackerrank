#include <iostream>

using namespace std;

int main () {
	int i, j;
	int diff;
	int max, num;
	bool *seen;
	int *arr;
	cin >> max;
	cin >> num;
	arr = new int [num + 1];
	seen = new bool [max + 1];
	for (i = 0; i < max; i++)
		seen [i] = false;
	seen [i] = true;
	for (i = 0; i < num; i++) {
		cin >> arr [i];
		seen [arr [i]] = true;
	}
	arr [i] = max;
	for (i = num; i > 0; i--) {
		for (j = i - 1; j >= 0; j--) {
			diff = arr [i] - arr [j];
			if (seen [diff] == false)
				seen [diff] = true; 	
		}
	}
	for (i = 0; i <= max; i++) {
		if (seen [i] == true)
			cout << i << " ";
	}
	return 0;
}
