#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    if (n>=1 && n<=10000)
    {
        for(long i=1; i<=n; i++)
        {
            cout << (((i*i)*(i*i - 1))/2) - 4 * (i-1)*(i-2) << endl;
        }
    }
}