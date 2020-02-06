#include<stdio.h>
int main()
{
    int n,i,c=0,d,a[3000];
    scanf("%d",&n);

    for(i=0;i<n*2;i+=2)
    {
       scanf("%d %d",&a[i],&a[i+1]);
    }

    for(i=0;i<n*2;i+=2)
    {

        c-=a[i];
        c+=a[i+1];
        if(c>d)
            d=c;
    }
    printf("%d",d);


}
