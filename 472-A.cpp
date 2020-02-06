#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int mark[n];
    long int limit = sqrt(n+1);
    memset(mark,0,sizeof(mark));
    set<int>s;
    set<int>::iterator ft;
    set<int>::iterator st;
    for(int i=4;i<=n;i+=2)
    {
        mark[i]=1;
        s.insert(i);
    }

    for(int i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            if(i<=limit)
            {
                for(int j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                    s.insert(j);
                }
            }
        }
    }

    for(ft=s.begin();ft!=s.end();ft++)
    {
        for(st=s.begin();st!=s.end();st++)
        {
            if((*ft+*st)==n)
            {
                cout<<*ft<<" "<<*st;
                c=1;
                break;
            }
        }
        if(c==1)
            break;
    }
}
