#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("1293-A.txt","r",stdin);
    long int t,itf,itb,ter;
    cin>>t;
    while(t--){
        long int n,s,k,f=0,b=0;
        cin>>n>>s>>k;
        long int a[k];
        for(int i=0; i<k;i++)
            cin>>a[i];

        f=s; b=s;
        while((f<=n) || (b>1)){
            itf=0; itb=0; ter=0;
            for(int i=0; i<=k; i++){
                if(f==a[i])
                    itf++;
                if(b==a[i])
                    itb++;
            }
            if(f<=n && b>0){
                 if(itf<1 || itb<1){
                    ter=1;
                    break;
                }
            }
            else if(f<=n && b<1){
                if(itf<1){
                    ter=1;
                    break;
                }
            }
            else if(f>n && b>0){
                if(itb<1){
                    ter=1;
                    break;
                }
            }

            f++;
            b--;
        }
        if(ter==1){
            if(f>n && b>0)
                cout<<s-b<<"\n";
            else if(f<=n && b<=0)
                cout<<f-s<<"\n";
            else if(f<=n && b>0){
                if(f-s < s-b)
                    cout<<f-s<<"\n";
                else
                    cout<<s-b<<"\n";
            }
        }
        else
            cout<<0<<"\n";

    }
}
