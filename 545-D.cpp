#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int n, ct=0,sum=0;
    cin>>n;
    long int a[n+1];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0; i<n; i++){
        if(a[i]>=sum)
            ct++;
        sum+=a[i];
    }
    cout<<ct;
}
