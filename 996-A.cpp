#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,c=0;
    cin>>n;
    while(n!=0)
    {
        if(n>=100) n-=100;
        else if(n>=20) n-=20;
        else if(n>=10) n-=10;
        else if(n>=5) n-=5;
        else if(n>=1) n-=1;
        c++;
    }
    cout<<c;
}
