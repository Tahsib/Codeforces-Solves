#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,k;
    cin>>n;
    k = n/2;
    if(n%2==0){
        cout<<k<<endl;
        while(k!=0){
            cout<<2<<" ";
            k--;
        }

    }
    else{
        cout<<k<<endl;
        while(k!=0){
            if(k==1)
                cout<<3;
            else
                cout<<2<<" ";
            k--;
        }
    }

}
