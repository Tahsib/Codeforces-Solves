#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("716-A.txt","r",stdin);
    long int n,c,cnt=1;
    cin>>n>>c;
    long int *p = new long int [n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<n-1;i++)
    {
        if((*(p+i+1)-*(p+i))<=c) cnt++;
        else cnt=1;
    }
    cout<<cnt;

}
