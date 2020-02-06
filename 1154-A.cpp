#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a[4],x,y,z;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    x = a[3] - a[2];
    y = a[1] - x;
    z = a[0] - x;
    cout<<x<<" "<<y<<" "<<z;
}
