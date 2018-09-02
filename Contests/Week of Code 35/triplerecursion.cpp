#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n,m,k,i,j;
	cin >> n >> m >> k;
	int **arr = new int* [n];
	for (i = 0; i < n; i++)
		arr[i] = new int [n];
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 && j == 0)
				arr[i][j] = m;
			else {
				if (i == j)
					arr[i][j] = arr[i - 1][j - 1] + k;
				else if (i < j)
					arr[i][j] = arr[i][j - 1] - 1;
				else
					arr[i][j] = arr[i - 1][j] - 1;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
