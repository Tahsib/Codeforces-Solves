#include<stdio.h>

int main()
{
    char s[60];
    int i,len,cnt=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %c",&s[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            cnt++;
    }
    printf("%d",cnt);
}
