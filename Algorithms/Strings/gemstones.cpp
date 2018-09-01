#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void merge (vector<string>& original, vector<string>& first, vector<string>& second) {
	original.clear ();															  //Deleting all the elements in the larger 'original' vector
	int i = 0, j = 0;															   //Iterators
	
	//Until the end of either of the smaller vectors is reached...
	while ((i < first.size ()) && (j < second.size ())) {
		if (first [i] <= second [j]) {
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

void merge_sort (vector<string>& bigger) {
	//If the 'bigger' vector has more than one element...
	if (bigger.size () > 1) {
		vector<string> first_half (bigger.begin (), bigger.begin () + (bigger.size () / 2));   //Copying first half of 'bigger' into 'first_half'
		vector<string> second_half (bigger.begin () + (bigger.size () / 2), bigger.end ());	//Copying second half of 'bigger' into 'second_half'
		merge_sort (first_half);															//Recursive call on 'first_half' vector
		merge_sort (second_half);														   //Recursive call on 'second_half' vector
		merge (bigger, first_half, second_half);		//Merging 'first_half' and 'second_half' into the original 'bigger' vector
	}//End if
}

int main() {
    int t, i, j, ans = 0, count;
    string temp;
    vector <string> V;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> temp;
        V.push_back (temp);
    }
    merge_sort (V);
    std::sort(V [0].begin(), V [0].end());
	V [0].erase(std::unique(V [0].begin(), V [0].end()), V [0].end());
    for (i = 0; i < V [0].length (); i++) {
        count = 0;
        for (j = 1; j < t; j++) {
            if (V [j].find(V [0][i]) != std::string::npos) {
                count++;
            }
        }
        if (count == t - 1) {
            ans++;
            //cout << V [0][i] << endl;
        }
    }
    cout << ans;
    
    return 0;
}
