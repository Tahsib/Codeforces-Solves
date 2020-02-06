#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int eq,cnt=0,len;
    len = s.length();

    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
            cnt++;
    }
    eq = 2 * cnt - 1;
    if(len>eq)
        cout<<eq;
    else
        cout<<len;
}
