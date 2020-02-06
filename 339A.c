#include<stdio.h>
#include<string.h>

int main()
{
    char a[150],temp[150];
    int len,i,j,n;
    scanf("%s",a);

    len = strlen(a);
    if(len>=3)
    {
        for(i=0;i<len-2;i=i+2)
        {
            for(j=0;j<len-i-2;j=j+2)
            {
                if((a[j]=='2' && a[j+2]=='1')||(a[j]=='3'&& a[j+2]=='2')||(a[j]=='3'&& a[j+2]=='1'))
                {
                    temp[0] = a[j];
                    a[j] = a[j+2];
                    a[j+2] = temp[0];
                }
            }
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
