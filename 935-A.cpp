#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,c=0,d;
    cin>>n;
    for(long int i=1;i<n;i++)
    {
        d=0;
        d = n-i;
        if(d%i==0)
            c++;
    }
    cout<<c;
}
