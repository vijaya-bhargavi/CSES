#include<bits/stdc++.h>
using namespace std;

int main(){
    long t, a, b;
    cin >> t;

    while(t--)
    {
        cin >> a >> b;

        if ((a+b)%3 == 0 && max(a, b) <= 2*min(a, b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}