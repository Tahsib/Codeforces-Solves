#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[200];
    int len,len1,i,j=0;
    scanf("%s",a);
    len = strlen(a);

    for(i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
    for(i=0;i<len;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
        {
            continue;
        }
        else
        {
            j++;
            b[j]='.';
            j++;
            b[j]=a[i];

        }

    }
    for(i=1;i<=j;i++)
    {
        printf("%c",b[i]);
    }
    return 0;

}
