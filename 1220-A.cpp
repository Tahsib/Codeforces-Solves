#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1220-A.txt","r",stdin);
    long int n,z=0,o=0,t;
    cin>>n;
    char c;
    for(long int i=0;i<n;i++)
    {
        cin>>c;
        if(c=='z')z++;
        else if(c=='n')o++;
    }
    t=z+o;
    for(long int i=0;i<t;i++)
    {
        if(o>=1)
        {
            cout<<"1"<<" ";
            o--;
        }
        else if(z>=1)
        {
            cout<<"0"<<" ";
            z--;
        }
    }
}
