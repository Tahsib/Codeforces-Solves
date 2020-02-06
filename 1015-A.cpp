#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    vector<int>v;
    int n,m,a[210],d;
    cin>>n>>m;
    for(int i=0;i<n*2;i+=2)
    {
        scanf("%d %d",&a[i],&a[i+1]);
    }

    for(int i=0;i<n*2;i+=2)
    {
        for(int j=a[i];j<=a[i+1];j++)
            s.insert(j);
    }

    for(int i=1;i<=m;i++)
    {
       if(!s.count(i))
        v.push_back(i);
    }

    cout<<v.size()<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }

}
