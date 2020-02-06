#include<stdio.h>
#include<string.h>
#define SIZE 11000
int main()
{
    char a[SIZE];
    int i,len;
    scanf("%s",a);
    len = strlen(a);

    if(a[0]>='a'&& a[0]<='z')
    {
        a[0] = a[0]-32;
    }

    for(i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }

}
