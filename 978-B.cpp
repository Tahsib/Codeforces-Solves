#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ch=1,ct=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='x'&& s[i+1]=='x') ch++;
        else ch=1;
        if(ch>=3)ct++;
    }
    cout<<ct;
}
