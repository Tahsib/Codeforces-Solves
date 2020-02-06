#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,i,n,c;
    scanf("%d %d %d",&n,&a,&b);


    if(b>0)
    {
        for(i=0;i<b;i++)
        {
            if(a==n)
            {
                a=1;
            }
            else
            {
                a++;
            }
        }
        printf("%d",a);
    }
    else
    {
        c = abs(b);
        for(i=0;i<c;i++)
        {
            if(a==1)
            {
                a=n;
            }
            else
            {
                a--;
            }
        }
        printf("%d",a);
    }
    return 0;
}
