#include<bits/stdc++.h>
using namespace std;

int main()
{
    char p[100];
    int n,s=0,f=0;
    scanf("%d",&n);
    scanf("%s",p);
    for(int i=1;i<n;i++)
    {
        if(p[i-1]=='S'&& p[i]=='F') s++;
        else if(p[i-1]=='F' && p[i]=='S') f++;
    }
    if(s>f) cout<<"YES";
    else cout<<"NO";

}
