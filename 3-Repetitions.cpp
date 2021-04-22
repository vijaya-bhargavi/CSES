#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long int n=0,max_len=0;
    char str[1000000];
    cin>>str;
    for(unsigned long int i=0;i<strlen(str)-1;i++){
        if(str[i]!=str[i+1]){
            n=0;
        }
        else{
            n++;
        }
        if(max_len<n){
            max_len=n;
        }
    }
    cout<<max_len+1<<endl;
    return 0;
}