#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e = a ^ b;
    int f = c | d;
    int g = b & c;
    int h = a ^ d;

    int i = e & f;
    int j = g | h;

    int k = i ^ j;

    cout<<k;

}
