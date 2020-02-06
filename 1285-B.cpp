#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n,a,sum=0,sub=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>0)
                sum+=a;
            else
                sub-=a;
        }
        if(sub=0)
            cout<<"YES";
        else if(sum+sub>sum)

    }
}
