#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void merge (vector<int>& original, vector<int>& first, vector<int>& second) {
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

class Queue {
	
	private :
	
		struct node {
			int data;							//Variable to store the data
			struct node *next;					//Pointer to the next node
		};
	
	public :
	
		struct node *front, *back;				//Pointers to the first and last nodes of a queue
		int count;								//Variable to maintain a count of the number of elements in the queue
		
		//Constructor
		Queue () {
			//Initialisations
			front = NULL;
			back = NULL;
			count = 0;
		}
		
		void Enqueue (int n) {
			struct node *temp;					//Pointer to a new node
			temp = new node;					//Memory allocation
			temp -> data = n;					//Storing the vertex number
			temp -> next = NULL;
			
			//If the queue is empty...
			if (front == NULL)
				front = temp;					//Making the new node the front node of the queue
			//If the queue is not empty...
			else
				back -> next = temp;			//Attaching it at the back of the queue
			back = temp;						//Making the new node the new back of the queue
			count++;							//Incrementing count
			return;
		}
		
		void Dequeue () {
			struct node *temp = new node;		//Allocating memory to a temporary pointer			
			//If the queue is empty...
			if (IsEmpty() == true)
				cout << "The queue is empty.\n";	
			else {
				temp = front;					//Mkaing the node to be deleted the front node
				front = front -> next;			//Changing the front of the queue to the node after it
				delete temp;					//Deleting the front node and freeing memory
				count--;						//Decrementing count
			}//End else
			
			return;
		}
		
		bool IsEmpty () {
			//If the queue is empty...
			if (front == NULL)
				return true;
			//If the queue is not empty...
			else
				return false;
		}
		
		int Front () {
            int x;
			if (IsEmpty () == false)
				x = front -> data;
           return x;
		}
}X;

int main() {
    vector <int> V;
    int n, i = 0, num, count = 0;
    cin >> n;
    while (i < n) {
        cin >> num;
        V.push_back (num);
        i++;
    }
    merge_sort (V);
    for (i = 0; i < n; i++)
        X.Enqueue (V [i]);
    while (X.IsEmpty () == false) {
        num = X.Front ();
        X.Dequeue ();
        while ((X.Front () < num + 5) && (X.IsEmpty () == false))
            X.Dequeue ();
        count++;
    }
    cout << count;
    return 0;
}
