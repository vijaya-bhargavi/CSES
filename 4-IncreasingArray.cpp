#include <bits/stdc++.h>
using namespace std;
int main(){
    long int n,i,count=0;
    cin>>n;
    long int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count=count+(arr[i]-arr[i+1]);
            arr[i+1]=arr[i];
        }
    }
    cout<<count<<endl;
    return 0;

}
