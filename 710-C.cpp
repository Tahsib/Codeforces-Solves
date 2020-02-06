#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,odd=1,even=2;
    cin>>n;
    s=n/2;
    for(int i=-s;i<=s;i++){
        for(int j=-s;j<=s;j++){
            if(abs(i)+abs(j)<=s){
                cout<<odd<<" ";
                odd+=2;
            }
            else{
                cout<<even<<" ";
                even+=2;
            }
        }
        cout<<"\n";
    }

}
