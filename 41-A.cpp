#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("41-A.txt","r",stdin);
    string s1,s2;
    char a[110],b[110];
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    strcpy(a,s1.c_str());
    strcpy(b,s2.c_str());
    int i = strcmp(a,b);
    if(i==0)
        cout<<"YES";
    else
        cout<<"NO";
}
