#include <iostream>
#include <vector>

using namespace std;

struct Frac {
	int quo, rem, denom;
};

int main () {
	Frac temp;
	vector <Frac> answer;
	int a, b;
	cin >> a >> b;
	while ((a != 0) && (b != 0)) {
		temp.quo = a / b;
		temp.rem = a % b;
		temp.denom = b;
		answer.push_back (temp);
		cin >> a >> b;	
	}
	for (int i = 0; i < answer.size (); i++)
		cout << answer [i].quo << " " << answer [i].rem << " / " << answer [i].denom << endl;
}
