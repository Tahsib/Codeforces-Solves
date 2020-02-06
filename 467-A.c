#include<stdio.h>

int main()
{
    int n,p,q,i,a[205],c=0;
    scanf("%d",&n);
    for(i=0;i<n*2;i++) scanf("%d",&a[i]);

    for(i=0;i<n*2;i+=2)
    {
        if((a[i+1]-a[i])>=2) c++;
    }
    printf("%d",c);
    return 0;
}
