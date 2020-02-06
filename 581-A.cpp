#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,d=0,s=0;
    scanf("%d %d",&a,&b);
    while(!((a==0 && b==0)||(a==0 && b==1)||(a==1 && b==0)))
    {
        if(a>0 && b>0)
        {
            d++; a--; b--;
        }
        else if(a>1 && b<=0)
        {
            s++; a-=2;
        }
        else if(b>1 && a<=0)
        {
            s++; b-=2;
        }
    }
    printf("%d %d",d,s);
}
