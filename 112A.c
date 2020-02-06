#include<stdio.h>
#include<string.h>

int low(char a[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=90)
            a[i] = a[i]+32;
    }
}
int main()
{
    char a[150],b[150];
    int i,n,len,c;
    scanf("%s",a);
    scanf("%s",b);
    len = strlen(a);
    low(a,len);
    len = (strlen(b));
    low(b,len);
    c = strcmp(a,b);

    if(c<0)
        printf("%d",-1);
    else if(c>0)
        printf("%d",1);
    else
        printf("%d",c);

    return 0;
}
