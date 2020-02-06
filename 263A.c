#include<stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE][SIZE],i,j,c,d,r,cnt=0;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if((a[i][j])==1)
            {
                r=i;
                c=j;
            }
        }
    }

    while(r!=2)
    {
        if(r<2)
        {
            r++;
            cnt++;
        }
        else if(r>2)
        {
            r--;
            cnt++;
        }
    }

    while(c!=2)
    {
        if(c<2)
        {
            c++;
            cnt++;
        }
        else if(c>2)
        {
            c--;
            cnt++;
        }
    }

    printf("%d",cnt);

}
