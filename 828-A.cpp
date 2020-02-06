#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,p=0,d,k=0;

    cin>>n>>a>>b;
    long long int t[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>t[i];
    }
    d = a + b*2;
    for(long long int i=0; i<n; i++)
    {
        p+=t[i];
    }

    if(p>d){
        k = p-d;
    }
    cout<<k;
}
