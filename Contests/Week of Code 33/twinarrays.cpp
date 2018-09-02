#include <iostream>
#include <vector>

using namespace std;

struct Duo {
	int num,ind;
};

vector<Duo> Merge (vector<Duo> a, vector<Duo> b) {
	vector<Duo> arr;
	int i = 0, j = 0;
	while (i < a.size() && j < b.size()) {
		if (a[i].num < b[j].num) {
			arr.push_back(a[i]);
			i++;
		}
		else {
			arr.push_back(b[j]);
			j++;
		}
	}
	while (i < a.size()) {
		arr.push_back(a[i]);
		i++;
	}
	while (j < b.size()) {
		arr.push_back(b[j]);
		j++;
	}
	return arr;
}

vector<Duo> MergeSort (vector<Duo> arr) {
	vector<Duo> a,b;
	if (arr.size() > 1) {
		a.assign(arr.begin(),arr.begin() + (arr.size()/2));
		b.assign(arr.begin() + (arr.size()/2),arr.end());
		a = MergeSort(a);
		b = MergeSort(b);
		arr = Merge(a,b);	
	}
	return arr;
}

int main() {
	int n;
	cin >> n;
	vector<Duo> arr1,arr2;
	Duo temp;
	int i;
	for (i = 0; i < n; i++) {
		cin >> temp.num;
		temp.ind = i;
		arr1.push_back(temp);
	}
	for (i = 0; i < n; i++) {
		cin >> temp.num;
		temp.ind = i;
		arr2.push_back(temp);
	}
	arr1 = MergeSort(arr1);
	arr2 = MergeSort(arr2);

	if (arr1[0].ind != arr2[0].ind)
		cout << arr1[0].num + arr2[0].num << endl;
	else if (arr1[0].num + arr2[1].num < arr1[1].num + arr2[0].num)
		cout << arr1[0].num + arr2[1].num << endl;
	else
		cout << arr1[1].num + arr2[0].num << endl;
	return 0;
}
