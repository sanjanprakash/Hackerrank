#include <iostream>
using namespace std;
int main() {
    int n,k,pagenum = 1,spb = 0,numprob;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> numprob;          

        for(int j = 1; j <= numprob; j++){
            if(pagenum == j)
                spb++;
            if(j == numprob || j%k == 0) 
                pagenum++; 
        }
    }
    cout << spb; 
    return 0;
}
