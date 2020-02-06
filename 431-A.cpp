#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t=0,i=0;
    int a1,a2,a3,a4;
    string s;
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    cin>>s;
    while(s[i]!='\0')
    {
        if(s[i]=='1') t+=a1;
        else if(s[i]=='2') t+=a2;
        else if(s[i]=='3') t+=a3;
        else if(s[i]=='4') t+=a4;
        i++;
    }
    cout<<t;
}
