#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,l=0,r=0,cnt=0;
    string s;
    cin>>n; cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='L')
            l--;
        else if(s[i]=='R')
            r++;
    }
    for(int i=l;i<=r;i++)
        cnt++;
    cout<<cnt;
}
