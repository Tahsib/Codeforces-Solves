#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100],l,c=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>=l) v.push_back(a[i]);
    }
    while(c!=v.size())
    {
        while(l<=*--v.end())
        {

        }
    }


}
