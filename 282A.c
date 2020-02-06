#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,inc=0,dec=0,out=0;
    char a[10];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        inc=0;
        dec=0;
        scanf("%s",a);
        for(j=0;j<3;j++)
        {
            if(a[j]=='+')
            {
                inc++;
            }
            else if(a[j]=='-')
            {
                dec++;
            }
        }
        if(inc>0)
        {
            out++;
        }
        else
        {
            out--;
        }

    }
    printf("%d",out);

    return 0;
}
