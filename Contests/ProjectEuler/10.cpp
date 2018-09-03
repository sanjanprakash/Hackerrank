#include <iostream>
#include<vector>
using namespace std;
long long int prime(long long int);
int main()
{
    long long int tc,N;
    unsigned long long int sum=0;
    cin >> tc;
    vector <long long int>v;
    long long int arr[1000000] = {0},i,j;
    for (i = 2; i < 1000000; i++)
    {
        for ( j = i * i; j < 1000000; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 1000000; i++)
    {
        if (arr[i - 1] == 0)
            v.push_back(i);
    }
    while(tc--)
    {
        cin >> N;
        i = 1;
        while(v.at(i) <= N)
        {
            sum+=v.at(i);
            i++;
        }
        cout << sum << "\n";
        sum = 0;
    }
    return 0;
}
