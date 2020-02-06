#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    long int a,b,n,s,f1,f2;
    cin>>q;
    while(q--){
        cin>>a>>b>>n>>s;
        if(s%n>0){
            f1 = s%n;
            f2 = s/n;
            if(f1<=b && f2<=a)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
