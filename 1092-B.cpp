#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,c,t;
    set<int>s;
    set<int>::iterator it;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        c=0;
        scanf("%d",&a);
        for(it=s.begin();it!=s.end();it++)
        {
            if(*it==a){
                s.erase(a);
                c=1;
                break;
            }
        }
        if(c==0)
            s.insert(a);
    }
    c=0;
    for(it=s.begin();it!=s.end(); it++)
    {
        t = *it;
        it++;
        c = c + (*it-t);
    }
    cout<<c;
}
