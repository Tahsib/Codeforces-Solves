#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1294-A.txt","r",stdin);
    long int a[3],n,k,t;
    cin>>t;
    while(t--){
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);
        k = a[2] - a[0];
        k = k + (a[2] - a[1]);
        if(k>n)
            cout<<"NO"<<endl;
        else{
            n = n-k;
            if(n%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
