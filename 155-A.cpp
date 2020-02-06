#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,h,t=0;
    cin>>n;
    int a[n+5];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        l=0;h=0;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])h++;
            else if(a[j]>a[i])l++;
        }
        if(h==i||l==i)t++;
    }
    cout<<t;
}
