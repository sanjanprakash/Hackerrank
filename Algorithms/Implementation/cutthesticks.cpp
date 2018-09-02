#include <iostream>
#include <vector>

using namespace std;

void merge (vector<int>& original, vector<int>& first, vector<int>& second) {
	original.clear ();															  //Deleting all the elements in the larger 'original' vector
	int i = 0, j = 0;															   //Iterators
	
	//Until the end of either of the smaller vectors is reached...
	while ((i < first.size ()) && (j < second.size ())) {
		if (first [i] >= second [j]) {
			original.push_back (first [i]);
			i++;	
		}//End if
		else {
			original.push_back (second [j]);
			j++;
		}//End else
	}//End while
	//After reaching the end of the 'first' vector, until the end of the 'second' vector is reached...
	while (j < second.size ()) {
		original.push_back (second [j]);
		j++;
	}//End while
	//After reaching the end of the 'second' vector, until the end of the 'first' vector is reached...	
	while (i < first.size ()) {
		original.push_back (first [i]);
		i++;
	}//End while
}

void merge_sort (vector<int>& bigger) {
	//If the 'bigger' vector has more than one element...
	if (bigger.size () > 1) {
		vector<int> first_half (bigger.begin (), bigger.begin () + (bigger.size () / 2));   //Copying first half of 'bigger' into 'first_half'
		vector<int> second_half (bigger.begin () + (bigger.size () / 2), bigger.end ());	//Copying second half of 'bigger' into 'second_half'
		merge_sort (first_half);															//Recursive call on 'first_half' vector
		merge_sort (second_half);														   //Recursive call on 'second_half' vector
		merge (bigger, first_half, second_half);		//Merging 'first_half' and 'second_half' into the original 'bigger' vector
	}//End if
}

int main () {
	int n, num;
	cin >> n;
	int i, j, k;
	vector <int> V;
	for (i = 0; i < n; i++) {
		cin >> num;
		V.push_back (num);
	}
	
	merge_sort (V);
	
	i = n;
	k = i;
	
	while (i > 0) {
		num = V [i - 1];
		cout << i << endl;
		for (j = i - 1; j >= 0; j--) {
			if (V [j] == num)
				k--;
			V [j] = V [j] - num;
		}
		i = k;
	} 
	return 0;
}
