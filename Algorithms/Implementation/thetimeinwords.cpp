#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Word (int n) {
    if (n == 1)
        cout << "one";
    else if (n == 2)
        cout << "two";
    else if (n == 3)
        cout << "three";
    else if (n == 4)
        cout << "four";
    else if (n == 5)
        cout << "five";
    else if (n == 6)
        cout << "six";
    else if (n == 7)
        cout << "seven";
    else if (n == 8)
        cout << "eight";
    else if (n == 9)
        cout << "nine";
    else if (n == 10)
        cout << "ten";
    else if (n == 11)
        cout << "eleven";
    else if (n == 12)
        cout << "twelve";
    else if (n == 13)
        cout << "thirteen";
    else if (n == 14)
        cout << "fourteen";
    else if (n == 15)
        cout << "fifteen";
    else if (n == 16)
        cout << "sixteen";
    else if (n == 17)
        cout << "seventeen";
    else if (n == 18)
        cout << "eighteen";
    else if (n == 19)
        cout << "nineteen";
    else if (n == 20)
        cout << "twenty";
    else if (n == 30)
        cout << "thirty";
    else if (n == 40)
        cout << "forty";
    else if (n == 50)
        cout << "fifty";
    else if (n == 0)
        cout << "o' clock";
}

int main() {
    int h, m;
    cin >> h >> m;
    if (m == 0) {
        Word (h);
        cout << " ";
        Word (m);
    }
    else if (m == 15) {
        cout << "quarter past "; 
        Word (h);
    }
    else if (m == 30) {
        cout << "half past ";
        Word (h);
    }
    else if (m == 45) {
        if (h == 12)
            cout << "quarter to one";
        else {
            cout << "quarter to ";
            Word (h + 1);
        }
    }
    else if (m == 1) {
        Word (m);
        cout << " minute past ";
        Word (h);
    }
    else if (m <= 20) {
        Word (m);
        cout << " minutes past ";
        Word (h);
    }
    else if (m < 30) {
        Word (10 * (m / 10));
        cout << " ";
        Word (m % 10);
        cout << " minutes past ";
        Word (h);
    }
    else if (m > 30) {
        m = 60 - m;
        if (h != 12) {
            if (m == 1) {
                cout << "one minute to ";
                Word (h + 1);
            }
            else if (m % 10 == 0) {
                Word (m);
                cout << " minutes to ";
                Word (h + 1);
            }
            else if (m <= 20) {
                Word (m);
                cout << " minutes to ";
                Word (h + 1);
            }
            else {
                Word (10 * (m / 10));
                cout << " ";
                Word (m % 10);
                cout << " minutes to ";
                Word (h + 1);
            }
        }
        else {
            if (m == 1) {
                cout << "one minute to one";
            }
            else if (m % 10 == 0) {
                Word (m);
                cout << " minutes to one";
            }
            else if (m <= 20) {
                Word (m);
                cout << " minutes to one";
            }
            else {
                Word (10 * (m / 10));
                cout << " ";
                Word (m % 10);
                cout << " minutes to one";
            }
        }
    }
    return 0;
}
