#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    unsigned long int res = 1;
    unsigned long int mod = pow(10, 9) + 7;
    while(n--)
    {
        res = (res * 2) % mod;
    }

    cout << res << endl;
    
}