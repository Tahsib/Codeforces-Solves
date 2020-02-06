#include<stdio.h>

int main()
{
    int a[350],i,n,x=0,y=0,z=0;
    scanf("%d",&n);

    for(i=0;i<n*3;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n*3;i+=3)
    {
        x += a[i];
        y += a[i+1];
        z += a[i+2];
    }

    if(x==0&&y==0&&z==0)
        printf("YES");
    else
        printf("NO");

}
