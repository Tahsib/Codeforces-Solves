#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1017-A.txt","r",stdin);
    int n,i,t,j,pos;
    cin>>n;
    int a[4005];
    vector<int>v;
    for(i=0;i<n*4;i+=4)
    {
        scanf("%d %d %d %d",&a[i],&a[i+1],&a[i+2],&a[i+3]);
    }
    j = a[0]+a[1]+a[2]+a[3];
    for(i=0;i<n*4;i+=4)
    {
        t = a[i]+a[i+1]+a[i+2]+a[i+3];
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++)
    {
        if(j==v[i])
        {
            pos = i+1;
            break;
        }
    }
    cout<<pos;
}
