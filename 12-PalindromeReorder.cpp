#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str, new_str=""; char s=' ';
    int flag = 0;
    map<char, int>M;

    getline(cin , str);


    for(unsigned long i=0; i<str.length(); i++) M[str[i]]++;

    //map<char, int>:: iterator it;

    for(auto it=M.begin(); it!=M.end(); it++)
    {
        if(flag==0 && (it->second%2)!=0) flag++;

        else if(flag==1 && (it->second)%2!=0) 
        {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }

    for(auto it=M.begin(); it!=M.end(); it++)
    {
        int x = it->second/2;

        if ((it->second)%2==0) it->second = x;
        else 
        {
            s = it->first;
            it->second = x;
        }

        for(int i=0; i<x; i++) new_str += it->first;
    }

    // cout << new_str << " ";
    // cout << s << endl;

    if(s!=' ') new_str+=s;
    
    for(auto it=M.rbegin(); it!=M.rend(); it++)
    {
        // if(it->first!=s)
        // {
            int x = it->second;
            for(int i=0; i<x; i++) new_str += it->first;
        //}
    }

    cout << new_str << endl;
}