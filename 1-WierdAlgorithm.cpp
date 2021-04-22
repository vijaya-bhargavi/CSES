#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long int n;
    cin>>n;
    cout<<n<<"\t";
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        cout<<n<<"\t";
    }
    cout<<endl;
    return 0;
}