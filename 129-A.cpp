#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("129-A.txt","r",stdin);
    int n,a[100],c=0,cal;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cal=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
                cal+=a[j];
        }
        if(cal%2==0) c++;
    }
    cout<<c;
}
