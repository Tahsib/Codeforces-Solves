#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,ind=0;
    cin>>n;
    long int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(int i=0;i<n-2;i++){
        if(a[i]+a[i+1]>a[i+2]){
            ind=1;
            break;
        }

    }
    if(ind==1)
        cout<<"YES";
    else
        cout<<"NO";
}
