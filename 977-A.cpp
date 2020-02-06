#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int len = str.length();
        long int d = stoi(str);
        if(str[len-1]=='0')
            d /= 10;
        else
            d -= 1;

        str = to_string(d);
    }
    cout<<str;
}
