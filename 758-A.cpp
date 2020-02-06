#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    long int a[100],c=0,l,t;
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    sort(a,a+n);
    l=a[n-1];
    for(int i=0;i<n-1;i++)
    {
        t = l - a[i];
        c += t;
    }
    printf("%d",c);
}
