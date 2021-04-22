#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;

    long sum = (n*(n+1))/2;
    if (sum%2 != 0) cout << "NO" << endl;

    else{
        cout << "YES" << endl;
        sum /= 2;
        set<long>s1;
        set<long>s2;
        int a=0;
        for(long i=n; i>=1; i--)
        {
            if(a+i <= sum)
            
                a += i;
                s2.insert(i);
            }
            else
            {
                s1.insert(i);
            }
        }

        cout << s1.size() << endl;
        // for(auto it=s1.begin(); it!=s1.end(); it++){
        //     cout << *it << " ";
        // }
        // cout << endl;

        cout << s2.size() << endl;
        // for(auto it=s2.begin(); it!=s2.end(); it++){
        //     cout << *it << " ";
        // }
        cout << endl;
    }
}