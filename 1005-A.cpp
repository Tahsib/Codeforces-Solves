#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int main()
{
    vector<int>v;
    int n,a[MAX];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]==1)
        {
           v.push_back(a[i]);
        }
    }
    v.push_back(a[n-1]);
    cout<<v.size()<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

}
