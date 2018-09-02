#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct X {
    int num, index;
};

void merge (vector<X>& original, vector<X>& first, vector<X>& second) {
	original.clear ();															  //Deleting all the elements in the larger 'original' vector
	int i = 0, j = 0;															   //Iterators
	
	//Until the end of either of the smaller vectors is reached...
	while ((i < first.size ()) && (j < second.size ())) {
		if (first [i].num <= second [j].num) {
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

void merge_sort (vector<X>& bigger) {
	//If the 'bigger' vector has more than one element...
	if (bigger.size () > 1) {
		vector<X> first_half (bigger.begin (), bigger.begin () + (bigger.size () / 2));   //Copying first half of 'bigger' into 'first_half'
		vector<X> second_half (bigger.begin () + (bigger.size () / 2), bigger.end ());	//Copying second half of 'bigger' into 'second_half'
		merge_sort (first_half);															//Recursive call on 'first_half' vector
		merge_sort (second_half);														   //Recursive call on 'second_half' vector
		merge (bigger, first_half, second_half);		//Merging 'first_half' and 'second_half' into the original 'bigger' vector
	}//End if
}

int main() {
    vector <X> V;
    int t, q = 1;
    X temp;
    int a, b;
    cin >> t;
    while (q <= t) {
        cin >> a >> b;
        temp.num = a + b;
        temp.index = q;
        V.push_back (temp);
        q++;
    }
    merge_sort (V);
    for (q = 0; q < t; q++)
        cout << V [q].index << " ";
    
    return 0;
}
