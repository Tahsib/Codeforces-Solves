#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1196-A.txt","r",stdin);
    long long a,b,c,q;
    cin>>q;

    while(q--){
        cin>>a>>b>>c;
        cout<<(long long)(floor((a+b+c)/2))<<endl;
    }

}
