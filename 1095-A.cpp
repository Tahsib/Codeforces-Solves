#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,len,i=0,ct=1;
    string s,st;
    cin>>n;
    cin>>s;
    while(n!=i)
    {
        st.push_back(s[i]);
        i = i + ct;
        ct++;
    }
    cout<<st;
}
