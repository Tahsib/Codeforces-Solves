#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("939-A.txt","r",stdin);
    int a[5005],n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(i == a[a[a[i]]])
        {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}
