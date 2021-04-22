#include<bits/stdc++.h>
#include "boost/dynamic_bitset.hpp"
using namespace std;

int main()
{
    int n=0;
    long num = 1;
    cin >> n;

    for(int i=0; i<pow(2, n); i++)
    {
        
        cout << boost::dynamic_bitset<>(n, i) << endl;
    }

    
    
}