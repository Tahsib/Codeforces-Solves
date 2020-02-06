#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int s,n,k,i=1;
    cin>>n>>k;

    while(1){
        s = k*i;
        if(s>n){
            cout<<s;
            break;
        }
        i++;
    }
}
