#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n,count,sum=0;
    cin>>n;
    long int arr[n-1];
    for(long int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    count=n*(n+1)/2;
    cout<<count-sum<<endl;
    return 0;
}