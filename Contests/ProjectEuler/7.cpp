//Finding prime numbers
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n; //User input
    int num = 1; //number that will be tested if its a prime
    int primeCount = 0; //counts the times it num % i == 0
    vector <int> X;
    X.push_back (1);
    n = 10001;
    int t;
    cin >> t;
    //prints 1 as a prime number
    //cout<< 1 << '\n';

    //counts the number of primes
    int j = 0;
    while (j < n)
    {
        if (num <= 2)
            num++;//num = 2
        else
            num += 2;
        primeCount = 0;
    //Determines if a number is prime
        for(int i = 1; i <= sqrt (num); i++)
        {

            if(num % i == 0)
            {
                primeCount++;
            }
        }
            if(primeCount == 1)
            {
                X.push_back (num);
                j++;
            }
    }
    while (t > 0) {
        int x;
        cin >> x;
        cout << X [x] << endl;
        t--;
    }
    return 0;
}

