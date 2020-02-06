#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t=1,p=1,n;
    cin>>n;
    long ar[n];
    for(long i=0; i<n; i++){
        scanf("%ld",&ar[i]);
    }

    for(long i=0; i<n-1; i++)
    {
        if(ar[i]>ar[i+1]){
            t=1;
        }
        else if(ar[i]<=ar[i+1]){
          t++;
          if(p<t) p=t;
        }
    }
    cout<<p;
}
