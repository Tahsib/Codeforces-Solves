#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    for(int i=0;i<5;i++)
    {
        cin>>s2;
        if(s1[0]==s2[0]||s1[1]==s2[1])
        {
            cout<<"YES";
            break;
        }
        else if(i==4)
            cout<<"NO";
    }
}
