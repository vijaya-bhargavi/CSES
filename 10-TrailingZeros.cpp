#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n, count=0;
    
    cin >> n;
    
    for(int i=5; n/i!=0; i*=5)
    {
        count += n/i;
    }
    cout << count << endl;
}