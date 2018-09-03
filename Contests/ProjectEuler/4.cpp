#include<bits/stdc++.h>
 
using namespace std;
 
template <typename T> string NTS ( T Number )
  {
     ostringstream ss;
     ss << Number;
     return ss.str();
  }
vector<int>pallin;
 
int solve()
{
    for(int i = 101; i <= 999; i++)
    {
        for(int j = i + 1; j <= 999; j++)
        {
            int rem = i * j;
            if(rem > 101100 && rem < 1000000)
            {
                string s = NTS(rem);
                string t = s;
                reverse(s.begin(), s.end());
                if(s == t)
                {
                    pallin.push_back(rem);
                }
            }
        }
    }
    return pallin.size();
}
 
int main()
{
    int sz = solve();
    sort(pallin.begin(), pallin.end());
    int test;
    scanf("%d", &test);
    while(test--)
    {
        int num;
        scanf("%d", &num);
        for(int i = 0; i < sz; i++)
        {
            if(pallin[i]>num)
            {
                printf("%d\n", pallin[i - 1]);
                break;
            }
        }
    }
    return 0;
}
