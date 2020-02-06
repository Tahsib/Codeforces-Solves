#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1003-A.txt","r",stdin);
    int n,c=0;
    set<int>s;
    set<int>st;
    int a[100];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s.insert(a[i]);
    }
    for(auto it=s.begin();it!=s.end();++it)
    {
        for(int i=0;i<n;i++)
        {
            if(*it==a[i])c++;
        }
        st.insert(c);
        c=0;
    }
    cout<<*--st.end();
}
