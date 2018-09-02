/* Sample program illustrating input/output */
#include<iostream>
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

int main(void){
//Helpers for input and output

   int N, K, temp, i, j, k = 1;
   long long int result = 0;
    int num, rem;
    long long int sum;
   vector <int> x;
   cin >> N >> K;
   int C[K];
   for (i = 0; i < K; i++)
       C [i] = 0;
   for(int i = 0; i < N; i++){
      cin >> temp;
       x.push_back (temp);
   }
   merge_sort (x);

    i = 0;
    sum = 0;
    num = N / K;
    rem = N % K; 
    while (i < N) {
    	if ((i % K == 0) && (i > 0)) {
    		result += k * sum;
    		k++;
    		sum = 0;
    	}
    	sum += x [i];
    	i++;
    }
    result += k * sum;
   
   
   cout << result << "\n";
   
   return 0;
}
