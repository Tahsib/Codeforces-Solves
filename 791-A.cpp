#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0;

    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        c+=1;
    }
    cout<<c<<endl;
}
