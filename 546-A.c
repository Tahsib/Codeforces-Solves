#include<stdio.h>

int main()
{
    long int n,b=0;
    int i,k,w;

    scanf("%d %ld %d",&k,&n,&w);

    for(i=1;i<=w;i++)
    {
        b += i*k;
    }
    b = b - n;
    if(b<=0)
        printf("%d",0);
    else
        printf("%ld",b);
    return 0;
}
