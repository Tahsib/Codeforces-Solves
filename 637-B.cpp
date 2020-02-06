#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("637-B.txt","r",stdin);
    long int n;
    map<string, long int>mp;
    cin>>n;
    string s[n];
    for(long int i=0; i<n; i++){
        cin>>s[i];
    }
    for(long int i=n-1; i>=0; i--){
        if(mp[s[i]]!=1){
            cout<<s[i]<<"\n";
            mp[s[i]]=1;
        }
    }


}
