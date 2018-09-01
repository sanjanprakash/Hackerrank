#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str; cin >> str;
    int i=0;

    while(i < static_cast< int > (str.size()-1)) {
        if(i>-1 && str[i] == str[i+1]) {
            str.erase(i,2);
            i--;
        } else
            i++;
    }

    if(str.empty())
        cout << "Empty String" << endl;
    else
        cout << str << endl;   
    return 0;
}
