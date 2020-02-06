#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long int a;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==2)
            cout<<2<<"\n";
        else if(a%2!=0)
            cout<<1<<"\n";
        else
            cout<<0;
    }
}
